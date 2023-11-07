import rclpy
import time
import numpy as np
import torch
from rclpy.node import Node
from custom_msg.msg import ImgDetection
from models.experimental import attempt_load
from sensor_msgs.msg import Image
from cv_bridge import CvBridge, CvBridgeError
from utils.general import non_max_suppression
from utils.torch_utils import time_sync

bridge = CvBridge()

class DetectBall(Node):

    def __init__(self):
        super().__init__('detect_ball')

        self.conf_thresh = 0.25
        self.iou_thresh = 0.45
        self.max_det = 1000
        self.classes = None
        self.agnostic_nms = False
        weights='yolov5s.pt'  # model.pt path(s)

        # Load model
        self.model = attempt_load(weights, map_location='cpu')



        self.subscription = self.create_subscription(Image, 'camera', self.camera_callback, 10)
        self.publisher = self.create_publisher(ImgDetection, 'ball_information', 10)

    def camera_callback(self, msg):
        data_detect = ImgDetection()
        data_detect.detect = False
        t0 = time.time()
        img = bridge.imgmsg_to_cv2(msg, "bgr8")
        # Letterbox
        img0 = img.copy()
        img = img[np.newaxis, :, :, :]

        # Stack
        img = np.stack(img, 0)

        # Convert
        img = img[..., ::-1].transpose((0, 3, 1, 2))  # BGR to RGB, BHWC to BCHW
        img = np.ascontiguousarray(img)

        img = torch.from_numpy(img).to('cpu')
        img /= 255.0  # 0 - 255 to 0.0 - 1.0
        if img.ndimension() == 3:
            img = img.unsqueeze(0)

            # Inference
        t1 = time_sync()
        pred = self.model(img, augment=False, visualize=False)[0]

        # Apply NMS
        pred = non_max_suppression(pred, self.conf_thres, self.iou_thres, self.classes, self.agnostic_nms, max_det=self.max_det)
        t2 = time_sync()

        # Process detections
        for i, det in enumerate(pred):  # detections per image

            if len(det):
                data_detect.detect = True
                print(det)
                # Rescale boxes from img_size to im0 size

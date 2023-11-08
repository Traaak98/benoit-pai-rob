import rclpy
from rclpy.node import Node
from custom_msg.msg import ImgDetection
from sensor_msgs.msg import Image
from cv_bridge import CvBridge, CvBridgeError
from ultralytics import YOLO
import cv2 as cv


class DetectBall(Node):

    def __init__(self):
        super().__init__('detect_ball')

        self.threshold = 0.5
        self.cv_bridge = CvBridge()
        self.yolo = YOLO("src/vision_pkg/models/weights_coco128/yolov8x.pt")

        self.subscription = self.create_subscription(Image, '/depth_camera/image_raw', self.camera_callback, 10)
        self.publisher = self.create_publisher(ImgDetection, 'ball_information', 10)

    def camera_callback(self, msg):
        print("Detection")
        data_detect = ImgDetection()
        data_detect.detect = False

        # Convert ROS image to OpenCV image
        cv_image = self.cv_bridge.imgmsg_to_cv2(msg)
        cv_image = cv.cvtColor(cv_image, cv.COLOR_BGR2RGB)
        cv.imshow("Image", cv_image)
        cv.waitKey(0)

        # Prediction
        results = self.yolo(cv_image)
        print("End prediction")
        if results[0].boxes:
            print("Ball detected")
            for box in results[0].boxes:
                print(box)
                data_detect.detect = True
                x = box.xywh[0][0]
                y = box.xywh[0][1]
                w = box.xywh[0][2]
                h = box.xywh[0][3]
                milieu_x = x + w / 2
                milieu_y = y + h / 2
                data_detect.coordx.append(milieu_x)
                data_detect.coordy.append(milieu_y)
                name = self.yolo.names[int(box.cls)]
                data_detect.names.append(name)
        print("Publish")
        print(data_detect)
        self.publisher.publish(data_detect)


def main(args=None):
    rclpy.init(args=args)
    minimal_publisher = DetectBall()
    rclpy.spin(minimal_publisher)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
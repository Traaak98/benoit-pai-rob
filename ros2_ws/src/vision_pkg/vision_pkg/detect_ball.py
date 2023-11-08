import rclpy
from rclpy.node import Node
from custom_msg.msg import ImgDetection
from sensor_msgs.msg import Image
from cv_bridge import CvBridge, CvBridgeError
import cv2


class DetectBall(Node):

    def __init__(self):
        super().__init__('detect_ball')

        self.threshold = 0.5
        self.cv_bridge = CvBridge()

        self.subscription = self.create_subscription(Image, '/zenith_camera/image_raw', self.camera_callback, 10)
        self.image_publisher = self.create_publisher(Image, '/image_detection', 10)
        self.XY_publisher = self.create_publisher(ImgDetection, '/xy',10)


    def detect_yellow(self,imgBGR):

        imgHSV = cv2.cvtColor(imgBGR, cv2.COLOR_RGB2HSV)

        Hmin = 25
        Hmax = 35
        Smin = 60
        Smax = 255
        Vmin = 0
        Vmax = 255

        # Seuillage HSV pour detection du jaune

        imgbin = cv2.inRange(imgHSV, (Hmin, Smin, Vmin), (Hmax, Smax, Vmax))

        return imgbin




    def camera_callback(self, msg):
        msgtopublish = ImgDetection()
        Lx = []
        Ly = []
        cv_image = self.cv_bridge.imgmsg_to_cv2(msg)
        imgbin = self.detect_yellow(cv_image)
        contours, hierarchy = cv2.findContours(imgbin, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
        if len(contours) > 0:
            for contour in contours:
                cv2.drawContours(imgbin, [contour], -1, (0,255,0), 5)

                M = cv2.moments(contour)
                if M["m00"] != 0:
                    cx = int(M["m10"] / M["m00"])
                    cy = int(M["m01"] / M["m00"])
                    Lx.append(cx)
                    Ly.append(cy)
                    msgtopublish.coordx = Lx
                    msgtopublish.coordy = Ly
                    image_msg = self.cv_bridge.cv2_to_imgmsg(imgbin)
                    self.image_publisher.publish(image_msg)
                    self.XY_publisher.publish(msgtopublish)
                else:
                    print("Le moment est trop faible")
        else:
            print("je ne detecte pas de contour")
        print("Lx :" + str(Lx))
        print("Ly :" + str(Ly))

    def camera_callback_bary_avant(self, msg):
        cv_image = self.cv_bridge.imgmsg_to_cv2(msg)
        imgbin = self.detect_yellow(cv_image)


        contours, hierarchy = cv2.findContours(imgbin, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
        print("contours :" + str(contours))
        if len(contours) > 0:
            print("j'ai un contour")
            best_contour = contours[0]
            max_area = cv2.contourArea(best_contour)
            for contour in contours:
                area = cv2.contourArea(contour)
                if area > max_area:
                    best_contour = contour
                    max_area = area

            cv2.drawContours(imgbin, [best_contour], -1, (0,255,0), 5)
            image_msg = self.cv_bridge.cv2_to_imgmsg(imgbin)
            self.image_publisher.publish(image_msg)

            M = cv2.moments(best_contour)
            print("moment : " + str(M["m00"]))
            # si l'aire est non nulle
            if M["m00"] != 0:
                cx = int(M["m10"] / M["m00"])
                cy = int(M["m01"] / M["m00"])

                found = True
                barycentre = [cx, cy]

            else:
                found = False
                barycentre = [0, 0]
        else:
            found = False
            barycentre = [0, 0]
        print("barycentre :" +str(barycentre))



    def camera_callback_visu(self, msg):
        cv_image = self.cv_bridge.imgmsg_to_cv2(msg)
        imgbin = self.detect_yellow(cv_image)
        contours, hierarchy = cv2.findContours(imgbin, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

        img_contours = cv_image.copy()
        color = (0, 255, 0)  # Vert
        thickness = 2

        cv2.drawContours(img_contours, contours, -1, color, thickness)
        print("contour : "+ str(contours[0]))
        best_contour = contours[0]
        max_area = cv2.contourArea(best_contour)
        for contour in contours:
            area = cv2.contourArea(contour)
            if area > max_area:
                best_contour = contour
                max_area = area

        img_contour = cv_image.copy()
        cv2.drawContours(img_contour, [best_contour], -1, color, thickness)

        if len(contours) > 0:
            # Selectionnez le premier contour (l'objet) dans la liste des contours
            M = cv2.moments(best_contour)
            print("M :" + str(M))
            # Calculez les coordonnees du barycentre
            if M["m00"] != 0:

                cx = int(M["m10"] / M["m00"])
                cy = int(M["m01"] / M["m00"])
                print("Coordonnees du barycentre : ({}, {})".format(cx, cy))

                center = (int(cx), int(cy))
                cv2.circle(cv_image, center, 2, (0, 255, 255), -1)  # Dessine un cercle rouge sur le barycentre
                #image_msg = self.cv_bridge.cv2_to_imgmsg(cv_image)
                #self.image_publisher.publish(image_msg)
            else:
                print("L'objet a une aire nulle, impossible de calculer le barycentre.")
        else:
            print("Aucun contour trouve dans l'image.")





def main(args=None):
    print("Node before start")
    rclpy.init(args=args)
    print("Node after start")
    minimal_publisher = DetectBall()
    print("init Detect Ball")
    rclpy.spin(minimal_publisher)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()



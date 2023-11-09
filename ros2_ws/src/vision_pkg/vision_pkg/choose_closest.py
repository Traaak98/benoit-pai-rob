import rclpy
from rclpy.node import Node
from custom_msg.msg import ImgDetection
import numpy as np


class ChooseClosest(Node):
    def __init__(self):
        super().__init__('choose_closest')

        self.ball_subscription = self.create_subscription(ImgDetection, '/xy_ball', self.ball_callback, 10)
        self.robot_subscription = self.create_subscription(ImgDetection, '/xy_robot', self.robot_callback, 10)
        self.closest_publisher = self.create_publisher(ImgDetection, '/xy_closest_ball',10)

        self.robot_coordx = []
        self.robot_coordy = []
        self.ball_coordx = []
        self.ball_coordy = []

    def ball_callback(self, msg):

        if len(msg.coordx) > 0:
            self.ball_coordx = msg.coordx
            self.ball_coordy = msg.coordy
            self.chooseClosest()

        else :
            print("En attente de detection de balles ...")

        print("--- Ball ---")
        print("Lx :" + str(self.ball_coordx))
        print("Ly :" + str(self.ball_coordy))



    def robot_callback(self, msg):

        if len(msg.coordx) > 0:
            self.robot_coordx = msg.coordx
            self.robot_coordy = msg.coordy

        else:
            print("En attente de detection du robot ...")

        print("--- Robot ---")
        print("Lx :" + str(self.robot_coordx))
        print("Ly :" + str(self.robot_coordy))

    def chooseClosest(self):
        msgtopublish = ImgDetection()
        Lx = []
        Ly = []
        x_closest = 0
        y_closest = 0
        if len(self.robot_coordx) > 0 and len(self.robot_coordy) > 0:
            d_closest = np.sqrt((self.robot_coordx[0]-self.ball_coordx[0])**2+(self.robot_coordy[0]-self.ball_coordy[0])**2)
            for k in range(len(self.ball_coordx)):
                if np.sqrt((self.robot_coordx[0]-self.ball_coordx[k])**2+(self.robot_coordy[0]-self.ball_coordy[k])**2) < d_closest:
                    x_closest = self.ball_coordx[k]
                    y_closest = self.ball_coordy[k]

            Lx.append(x_closest)
            Ly.append(y_closest)
            msgtopublish.coordx = Lx
            msgtopublish.coordy = Ly
            self.closest_publisher.publish(msgtopublish)

            print("--- La balle la plus proche se trouve aux coordonées : ")
            print("x = " + str(x_closest))
            print("y = " + str(y_closest))

        else :
            print("wait")







def main(args=None):
    rclpy.init(args=args)
    minimal_publisher = ChooseClosest()
    rclpy.spin(minimal_publisher)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()


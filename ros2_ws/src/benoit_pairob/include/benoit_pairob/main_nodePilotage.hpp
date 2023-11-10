#include <eigen3/Eigen/Dense>
#include <chrono>
#include <functional>
#include <cmath>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "tf2/LinearMath/Quaternion.h"
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"
#include "tf2/utils.h"
#include "sensor_msgs/msg/imu.hpp"
#include "sensor_msgs/msg/joy.hpp"

using namespace Eigen;
using namespace std::chrono_literals;

class PilotageNode : public rclcpp::Node {
    public:
        PilotageNode();
        ~PilotageNode();
        void init_interfaces();
        void init_parameters();
        void timer_callback();
        void set_x(sensor_msgs::msg::Imu pose);
        void set_target(geometry_msgs::msg::PoseStamped pose);
        void set_target_teleop(sensor_msgs::msg::Joy joy);
        void control();
    private:
        Matrix<double, 3, 1> x_;
        Matrix<double, 2, 1> target_;
        Matrix<double, 2, 1> target_teleop;
        double k;
        Matrix<double, 3, 1> u_;
        double v_;  // vitesse d'avance
        bool teleop;
        bool button_pressed;
        std::chrono::milliseconds loop_dt_;
        rclcpp::TimerBase::SharedPtr timer_; // objet timer
        rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr subscriber_joy_; // objet subscriber
        rclcpp::Subscription<sensor_msgs::msg::Imu>::SharedPtr subscriber_heading_; // objet subscriber
        rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr subscriber_target_; // objet subscriber
        rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_command_; // objet publisher

        // index de la FSM
        int fsm_;

        // coordonnées du terrain et autres constantes
        int img_w = 1280;
        int img_h = 720;
        float coef_x = img_w/27.8;
        float coef_y = img_h/15.6;

        double filet_1[2] = {(double) img_w/2, img_h - 2.2*coef_y};
        double filet_2[2] = {(double) img_w/2, 2.2*coef_y};
        double zone_A[2] = {img_w - 1.5*coef_x, img_h - 1.5*coef_y};
        double zone_B[2] = {img_w - 1.5*coef_x, 3*coef_y};
        double zone_C[2] = {img_w - 3*coef_x, 1.5*coef_y};
        double zone_D[2] = {1.5*coef_x, 1.5*coef_y};
        double zone_E[2] = {1.5*coef_x, img_h - 3*coef_y};
        double zone_F[2] = {3*coef_x, img_h - 1.5*coef_y};
};
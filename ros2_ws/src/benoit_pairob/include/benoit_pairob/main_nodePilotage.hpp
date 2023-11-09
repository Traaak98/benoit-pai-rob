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
        double u1_;
        bool teleop;
        std::chrono::milliseconds loop_dt_;
        rclcpp::TimerBase::SharedPtr timer_; // objet timer
        rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr subscriber_joy_; // objet subscriber
        rclcpp::Subscription<sensor_msgs::msg::Imu>::SharedPtr subscriber_heading_; // objet subscriber
        rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr subscriber_target_; // objet subscriber
        rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_command_; // objet publisher
};

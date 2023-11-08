#include "benoit_pairob/main_nodePilotage.hpp"

PilotageNode::PilotageNode() : Node("pilotage_node") {
    init_interfaces();
    init_parameters();
    timer_ = this->create_wall_timer(loop_dt_, std::bind(&PilotageNode::timer_callback, this));
}

PilotageNode::~PilotageNode() {}

void PilotageNode::init_interfaces(){
    publisher_command_ = this->create_publisher<geometry_msgs::msg::Twist>("/demo/cmd_vel", 10);
    subscriber_joy_ = this->create_subscription<sensor_msgs::msg::Joy>("/joy", 10, std::bind(&PilotageNode::set_target_teleop, this, std::placeholders::_1));
    subscriber_heading_ = this->create_subscription<sensor_msgs::msg::Imu>("/demo/imu", 10, std::bind(&PilotageNode::set_x, this, std::placeholders::_1));
    subscriber_target_ = this->create_subscription<geometry_msgs::msg::PoseStamped>("/target_position", 10, std::bind(&PilotageNode::set_target, this, std::placeholders::_1));
}

void PilotageNode::init_parameters() {
    loop_dt_ = 40ms;
    x_ << 0, 0, 0;
    target_ << 0, 0;
    k = 0.5;
    u1_ = 0;
    teleop = true;
}

void PilotageNode::set_x(sensor_msgs::msg::Imu pose) {
    double x = 0;
    double y = 0;
    double theta = tf2::getYaw(pose.orientation);
    x_ << x, y, theta;
}

void PilotageNode::set_target(geometry_msgs::msg::PoseStamped pose) {
    double x = pose.pose.position.x;
    double y = pose.pose.position.y;
    target_ << x, y;
}

void PilotageNode::set_target_teleop(sensor_msgs::msg::Joy joy) {
    double x = joy.axes[3];
    double y = joy.axes[2];
    target_teleop << x, y;
}

void PilotageNode::timer_callback(){
    auto message = geometry_msgs::msg::Twist();

    if (teleop)
    {
        message.linear.x = target_teleop(0);
        if (target_teleop(0) < 0)
        {
            message.angular.z = -target_teleop(1);
        } else {
            message.angular.z = target_teleop(1);
        }
    } else {
        control();

        message.linear.x = 0;
        message.linear.y = 0.;
        message.angular.z = u1_;
    }

    publisher_command_->publish(message);
}

void PilotageNode::control() {
    //double e = atan2(target_(1)-x_(1), target_(0)-x_(0))-x_(2);
    double e = target_(0) - x_(2);
    e = 2*atan(tan(e/2));

    if (e > M_PI/4)
    {
        u1_ = M_PI/5;
    } else if (e < -M_PI/4)
    {
        u1_ = -M_PI/5;
    } else {
        u1_ = k*e;
    }
}

/****************************************
 
    MAIN

*****************************************/

int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PilotageNode>());
    rclcpp::shutdown();
    return 0;
}
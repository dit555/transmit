//ros includes
#include "ros/ros.h"
#include "std_msgs/Int16.h"

//other includes
#include "../header/transmit.h"
#include <string>

ros::NodeHandle n;


Transmit::Transmit(std::string tpc, int argc, char **argv){
	agc = argc;
	topic = tpc;
	agv = argv;
	dt = -1;

}

void Transmit::topicCallBack(const std_msgs::Int16& msg){
	dt = msg.data;
}

void Transmit::sub(){
	ros::init(agc, agv, "Transmit_" + topic);
	sb = n.subscribe(topic , 1000, Transmit::topicCallBack);
}

int getData(){
	return dt;
}

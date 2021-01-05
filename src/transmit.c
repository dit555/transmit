//ros includes
#include "ros/ros.h"

//other includes
#include "../header/transmit.h"
#include <string>

ros::Nodehandle n;

Transmit::Transmit (std::string topic, int argc, char **argv){
	ros::init(argc, argv, "Transmit_" + topic);
	sub = n.subscribe(topic , 1000, listen);
}

int Transmit::listen(data d){
	dt = d;
}

//ros includes
#include "ros/ros.h"
#include "std_msgs/Int16.h"

//other includes
#include <string>

#ifndef _TRANSMIT_
#define _TRANSMIT_

//template<typename data>
class Transmit {
public:
	Transmit(std::string tpc, int argc, char **argv); //init the topic	
	void topicCallBack(const std_msgs::Int16& msg); //recieve data from topic
	void sub(); //subscribe
	int send(); //send data to GUI
	int getData(); //temporary debug function
private:
	ros::Subscriber sb;	
	int dt;
	int agc;
	std::string topic;
	char **agv;
};

#endif

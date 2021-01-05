//ros includes
#include "ros/ros.h"

//other includes
#include <string>

#ifndef _TRANSMIT_
#define _TRANSMIT_

template<typename data>
class Transmit {
public:
	Transmit(std::string topic, int argc, char **argv); //init the topic	
	int listen(const data); //recieve data from topic
	int send(); //send data to GUI

private:
	ros::Subscriber sub;	
	data dt;
};

#endif

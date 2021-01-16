#include "ros/ros.h"
#include "std_msgs/String.h"

#include <string>
#include <iostream>
#include "../header/transmit.h"

int main(int argc, char **argv){
	
	std::string topic = "chatter";

	Transmit t(topic, argc, argv);
	ros::Rate loop_rate(10);
	
	
	int count = 0;
  	while (ros::ok()){

		std::cout << t.getData() << std::endl;
    		ros::spinOnce();
    		loop_rate.sleep();
    		 	}
	return 0;
}


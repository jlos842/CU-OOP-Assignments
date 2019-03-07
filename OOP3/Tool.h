/*
Josef Los

Header file for the tool struct. This struct will be used to store information
about the various tools in the program. The store will have an array of these
to manage and will rent them out and use the rentDaysLeft field to know
when they come back to the store. 
*/

#ifndef TOOLS_H
#define TOOLS_H

#include <string>

struct Tool {
	std::string toolName, toolCategory;
	int rentDaysLeft, price;
};

#endif

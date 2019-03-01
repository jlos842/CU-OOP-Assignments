/*
Josef Los

Header file for the tool class. This class will keep track of the tools in
the simulation
*/

#ifndef TOOLS_H
#define TOOLS_H

#include "Customer.h"
#include <string>

struct Tool {
	std::string toolName, toolCategory;
	int rentDaysLeft, price;
};

#endif

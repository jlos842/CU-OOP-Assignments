/*
Josef Los

Tester file for the tool struct
*/

#include "Tool.h"
#include <string>
#include <iostream>

int main()
{
	Tool tool;
	tool.toolName = "Jackhammer";
	tool.toolCategory = "Demolition";
	tool.rentStatus = true;
	
	std::cout << tool.toolName << std::endl;
	std::cout << tool.toolCategory << std::endl;
	std::cout << tool.rentStatus << std::endl;

	return 0;
}

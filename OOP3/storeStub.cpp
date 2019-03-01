#include "Store.h"
#include "Tool.h"
#include <iostream>
#include <string>

int main()
{
	Store toolstore;	
	int i = toolstore.getMoneyEarned();
	int j = toolstore.getToolsAvailable();

	std::cout << i << " --- " << j << std::endl;
	toolstore.printTools();

	return 0;
}

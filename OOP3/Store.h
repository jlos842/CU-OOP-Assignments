/*
Josef Los

Header file for the store class. The store manages a list of Tools as well
as a vector of Rental objects.
*/

#ifndef STORE_H
#define STORE_H

#include "Tool.h"

class Store
{
	public:
		Store();
		int getMoneyEarned();
		int getToolsAvailable();	
		void printTools();
	private:
		int moneyEarned, toolsAvailable;
		Tool inventory[20];
};

#endif

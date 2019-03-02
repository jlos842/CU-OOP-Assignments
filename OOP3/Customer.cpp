/*
Josef Los

Function definitions for the Customer class
*/

#include "Customer.h"
#include "RentPattern.h"
#include <string>

Customer::Customer(std::string name, int type)
{
	customerName = name;
	customerType = type;
	numTools = 0;
	switch(type)
	{
		case 0:
			rentMethod = new CasualPattern();
			break;
		case 1:
			rentMethod = new BusinessPattern();
			break;
		case 2:
			rentMethod = new RegularPattern();
			break;
	};
}

Customer::~Customer()
{
	delete rentMethod;
}

std::string Customer::getCustomerName() {return customerName;}
int Customer::getCustomerType() {return customerType;}
int Customer::getNumberOfTools() {return numTools;}

void Customer::rent(Store &toolstore)
{
	rentMethod->rentTools(toolstore);
}

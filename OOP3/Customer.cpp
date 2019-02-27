/*
Josef Los

Function definitions for the Customer class
*/

#include "Customer.h"
#include <string>

Customer::Customer(std::string name, std::string type)
{
	customerName = name;
	customerType = type;
	numTools = 0;
}

std::string Customer::getCustomerName() {return customerName;}
std::string Customer::getCustomerType() {return customerType;}
int Customer::getNumberOfTools() {return numTools;}

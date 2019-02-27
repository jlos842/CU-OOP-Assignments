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
}

std::string Customer::getCustomerName() {return customerName;}
std::string Customer::getCustomerType() {return customerType;}



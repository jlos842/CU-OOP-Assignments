/*
Josef Los

Function definitions for the Customer class
*/

#include <string>
#include "Customer.h"

static int CASUAL = 0;
static int BUSINESS = 1;
static int REGULAR = 2;

Customer::Customer(std::string name, int type)
{
	customerName = name;
	customerType = type;
}

std::string getName() {return name;};
int getType() {return type};



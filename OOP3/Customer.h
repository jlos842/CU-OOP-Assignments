/*
Josef Los

Header file for the Customer class
*/

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Customer
{
	public:		
		Customer(std::string name, std::string type);
		std::string getCustomerName();
		std::string getCustomerType();	
		int getNumberOfTools();
		//void rent();
	private:	
		int numTools;
		std::string customerName;
		std::string customerType;
		//rentPattern rentMethod;	
};

#endif

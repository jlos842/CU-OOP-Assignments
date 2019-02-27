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
		//void rent();
	private:	
		std::string customerName;
		std::string customerType;
		//Tool rentals[3];
		//rentPattern rentMethod;	
};

#endif

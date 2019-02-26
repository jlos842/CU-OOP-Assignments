/*
Josef Los

Header file for the Customer class
*/

#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer
{
	Public:
		Customer(std::string name, int type);
		std::string getName();
		int getCustomerType();	
		//void rent();
	Private:	
		std::string customerName;
		int customerType;
		//Tool rentals[3];
		//rentPattern rentMethod;	
}

#endif

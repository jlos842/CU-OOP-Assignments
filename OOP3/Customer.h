/*
Josef Los

Header file for the Customer class. Each instance of the customer class 
represents a single customer. Each customer has a name and a type. Each
customer has a RentPattern object depending on their type which handles
the act of formatting a request to the store to rent tools. 
*/

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Store; //FORWARD DECLARATIONS
class RentPattern;

typedef enum
{
	CASUAL = 0,
	BUSINESS,
	REGULAR	
} CustomerTypes;

class Customer
{
	public:		
		Customer(std::string name, int type);
		std::string getCustomerName();
		int getCustomerType();	
		int getNumberOfTools();
		void rent(Store &toolstore);
		void returnTools();
		void decrementNumTools(int numToolsReturned);
	private:	
		int numTools;
		int *numToolsPointer;
		std::string customerName;
		int customerType;
		RentPattern *rentMethod;	
};

#endif

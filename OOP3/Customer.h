/*
Josef Los

Header file for the Customer class
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
		//~Customer();
		std::string getCustomerName();
		int getCustomerType();	
		int getNumberOfTools();
		void rent(Store &toolstore);
		void returnTools();
		void decrementNumTools(int numToolsReturned);
		int getMinToolsRented();
	private:	
		int numTools;
		int *numToolsPointer;
		std::string customerName;
		int customerType;
		RentPattern *rentMethod;	
};

#endif

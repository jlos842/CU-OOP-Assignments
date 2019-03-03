/*
Josef Los

Header file for the Customer class
*/

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Store; //FORWARD DECLARATIONS
class RentPattern;

class Customer
{
	public:		
		typedef enum
		{
			CASUAL = 0,
			BUSINESS,
			REGULAR	
		} CustomerTypes;
		Customer(std::string name, int type);
		~Customer();
		std::string getCustomerName();
		int getCustomerType();	
		int getNumberOfTools();
		void rent(Store &toolstore);
	private:	
		int numTools;
		int *numToolsPointer;
		std::string customerName;
		int customerType;
		RentPattern *rentMethod;	
};

#endif

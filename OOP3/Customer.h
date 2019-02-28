/*
Josef Los

Header file for the Customer class
*/

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "RentPattern.h"
#include <string>

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
		void rent();

		//test
		RentPattern* getRentPattern();

	private:	
		int numTools;
		std::string customerName;
		int customerType;
		RentPattern *rentMethod;	
};

#endif

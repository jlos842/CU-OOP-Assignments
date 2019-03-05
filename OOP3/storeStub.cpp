#include "Simulation.h"
#include "Customer.h"
#include "Store.h"
#include "Tool.h"
#include <iostream>
#include <string>

int main()
{
	Store toolstore;
	Customer cust1("Joe", 1);
	Customer cust4("Billy", 1);
	Customer cust5("Charlie", 1);
	Customer cust6("Mac", 1);
	Customer cust7("Dennis", 1);
	Customer cust8("Dee", 1);
	Customer cust9("Frank", 1);
	Customer cust10("Cricket", 2);

	toolstore.storeShuffle();

	cust1.rent(toolstore);
	cust4.rent(toolstore);
	cust5.rent(toolstore);
	cust6.rent(toolstore);
	cust7.rent(toolstore);
	cust8.rent(toolstore);
	cust9.rent(toolstore);
	cust10.rent(toolstore);
	cust10.rent(toolstore);

	toolstore.decrementRentDaysLeft();
	toolstore.decrementRentDaysLeft();
	toolstore.decrementRentDaysLeft();
	toolstore.decrementRentDaysLeft();
	toolstore.decrementRentDaysLeft();
	toolstore.decrementRentDaysLeft();
	toolstore.decrementRentDaysLeft();
	toolstore.decrementRentDaysLeft();
	toolstore.decrementRentDaysLeft();

	std::cout << cust1.getNumberOfTools() << std::endl;
	std::cout << cust4.getNumberOfTools() << std::endl;
	std::cout << cust10.getNumberOfTools() << std::endl;

	toolstore.printTools();

	return 0;
}

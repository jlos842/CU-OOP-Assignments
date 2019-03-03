#include "Customer.h"
#include "Store.h"
#include "Tool.h"
#include <iostream>
#include <string>

int main()
{
	Store toolstore;	
	Customer cust1("Joe", 1);
	Customer cust2("Sarah", 0);
	Customer cust3("Frank", 2);

	cust1.rent(toolstore);
	cust2.rent(toolstore);
	std::cout << cust2.getNumberOfTools() << std::endl;
	cust2.rent(toolstore);
	std::cout << cust2.getNumberOfTools() << std::endl;
	cust3.rent(toolstore);

	toolstore.printActiveRentals();

	std::cout << cust1.getNumberOfTools() << std::endl;
	std::cout << cust3.getNumberOfTools() << std::endl;	
	std::cout << toolstore.getToolsAvailable() << std::endl;


	return 0;
}

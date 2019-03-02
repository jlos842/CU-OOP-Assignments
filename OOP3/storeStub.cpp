#include "Store.h"
#include "Tool.h"
#include <iostream>
#include <string>

int main()
{
	Store toolstore;	

	toolstore.rentOut(7, 3, "Joe");
	toolstore.rentOut(6, 2, "Billy");
	toolstore.rentOut(2, 1, "Andrew");

	toolstore.rentOut(3, 3, "Steven");
	toolstore.rentOut(2, 1, "Jacob");
	toolstore.printActiveRentals();
	toolstore.printCompletedRentals();

	toolstore.getMoneyEarned();
	toolstore.printTools();

	return 0;
}

#include "Store.h"
#include "Tool.h"
#include <iostream>
#include <string>

int main()
{
	Store toolstore;	

	toolstore.rentOut(7, 3, "Joe");
	toolstore.printRentals();

	return 0;
}

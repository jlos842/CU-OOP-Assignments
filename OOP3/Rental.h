/*
Josef Los
Header file for the rental struct
*/

#ifndef RENTAL_H
#define RENTAL_H

#include "Customer.h"
#include "Store.h"
#include "Tool.h"
#include <string>
#include <iostream>
#include <vector>

struct Rental
{
	bool activeRent;
	std::string customerName;
	std::vector<std::string> toolsRented;
	int rentDay, rentLength, rentPrice;
};

#endif

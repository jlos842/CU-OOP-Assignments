/*
Josef Los
Header file for the rental struct. This is the struct that contains
all the information for the Rentals that are generated when a customer
rents tools. These are then printed at the end of execution to generate
a report.
*/

#ifndef RENTAL_H
#define RENTAL_H

#include <string>
#include <vector>

struct Rental
{
	bool activeRent;
	std::string customerName;
	std::vector<std::string> toolsRented;
	int rentDay, rentLength, rentPrice, numToolsRented;
};

#endif

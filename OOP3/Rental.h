/*
Josef Los
Header file for the rental struct
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

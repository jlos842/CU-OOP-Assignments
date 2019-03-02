/*
Josef Los

Definitions file for the rentPattern class and it's subclasses
*/

#include "RentPattern.h"
#include <cstdlib>
#include <iostream>
#include <ctime>


CasualPattern::CasualPattern()
{
	minTools = 1;
	maxTools = 2;
	minNights = 1;
	maxNights = 2;
}

void CasualPattern::rentTools(Store &toolstore)
{

	srand(time(0));
	//Rents one to two tools for one to two nights	
	int r1 = rand();
	int r2 = rand();
	std::cout << "RENTING: " << (r1 % 2) + 1 << " tools for " << (r2 % 2) + 1 << " nights." << std::endl; 
}

BusinessPattern::BusinessPattern()
{
	minTools = 3;
	maxTools = 3;
	minNights = 7;
	maxNights = 7;
}

void BusinessPattern::rentTools(Store &toolstore)
{
	//TODO
}

RegularPattern::RegularPattern()
{
	minTools = 1;
	maxTools = 3;
	minNights = 3;
	maxNights = 5;
}

void RegularPattern::rentTools(Store &toolstore)
{	
	srand(time(0));
	int r1 = rand();
	int r2 = rand();
	std::cout << "RENTING: " << (r1 % 3) + 1 << " tools for " << (r2 % 3) + 3 << " nights." << std::endl; 
}

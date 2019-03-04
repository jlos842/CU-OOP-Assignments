/*
Josef Los

Definitions file for the rentPattern class and it's subclasses
*/

#include "RentPattern.h"
#include "Store.h"
#include <cstdlib>
#include <iostream>
#include <ctime>


int RentPattern::getMinToolsRented(){return minToolsRented;}

CasualPattern::CasualPattern(std::string name, int *numTools)
{
	numToolsPointer = numTools;
	customerName = name;	
	minToolsRented = 1;
}

void CasualPattern::rentTools(Store &toolstore)
{
	srand(time(0));
	int r1 = rand();
	int r2 = rand();

	int numtools;
	if(*numToolsPointer == 2)
	{
		numtools = 1;	
	}
	else
	{
		numtools = (r1 % (2 - (*numToolsPointer))) + 1; 		
	}

	int numdays = (r2 % 2) + 1;
	*numToolsPointer += numtools;
	toolstore.rentOut(numdays, numtools, customerName);
	/*
	if(numtools != 0)
	{	
		toolstore.rentOut(numdays, numtools, customerName);
	}
	*/
}

BusinessPattern::BusinessPattern(std::string name, int *numTools)
{
	numToolsPointer = numTools;
	customerName = name;	
	minToolsRented = 3;
}

void BusinessPattern::rentTools(Store &toolstore)
{
	if(*numToolsPointer == 3)
	{
		; //pass
	}
	else
	{
		*numToolsPointer += 3;
		toolstore.rentOut(7, 3, customerName);		
	}
}

RegularPattern::RegularPattern(std::string name, int *numTools)
{
	numToolsPointer = numTools;
	customerName = name;	
	minToolsRented = 1;
}

void RegularPattern::rentTools(Store &toolstore)
{	
	srand(time(0));
	int r1 = rand();
	int r2 = rand();

	int numtools = (r1 % (3 - (*numToolsPointer))) + 1; 	
	int numdays = (r2 % 3) + 3;
	*numToolsPointer += numtools;
	if(numtools != 0)
	{	
		toolstore.rentOut(numdays, numtools, customerName);
	}
}

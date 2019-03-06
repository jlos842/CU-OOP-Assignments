/*
Josef Los

Definitions file for the rentPattern class and it's subclasses
*/

#include "RentPattern.h"
#include "Simulation.h"
#include "Store.h"
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <vector>
#include <tuple>


int RentPattern::getMinToolsRented(){return minToolsRented;}

void RentPattern::returnTools()
{
	for(int i = 0; i < returnDates.size(); i++)
	{
		if(std::get<0>(returnDates[i]) == CURRENT_DAY)
		{
			*numToolsPointer -= std::get<1>(returnDates[i]);	
		}
	}
}

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
	else if(*numToolsPointer == 3)
	{
		return;
	}
	else
	{
		numtools = (r1 % 2) + 1; 		
	}

	if(toolstore.getToolsAvailable() < numtools)
	{
		return;
	}
	
	int numdays = (r2 % 2) + 1;
	*numToolsPointer += numtools;
	returnDates.push_back(std::make_tuple(CURRENT_DAY + numdays, numtools));
	toolstore.rentOut(numdays, numtools, customerName);	
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
		return;
	}
	else
	{
		if(toolstore.getToolsAvailable() < 3)
		{
			return;
		}
		returnDates.push_back(std::make_tuple(CURRENT_DAY + 7, 3));
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

	int numtools;

	if(*numToolsPointer == 3)
	{
		return;
	}
	else if(*numToolsPointer == 2)
	{
		numtools = 1;
	}
	else if(*numToolsPointer == 1)
	{
		numtools = r1 % 2 + 1;
	}
	else
	{
		numtools = r1 % 3 + 1;
	}

	if(toolstore.getToolsAvailable() < numtools)
	{	
		return;
	}

	if(numtools != 0)
	{		
		int numdays = (r2 % 3) + 3;
		*numToolsPointer += numtools;
		returnDates.push_back(std::make_tuple(CURRENT_DAY + numdays, numtools));
		toolstore.rentOut(numdays, numtools, customerName);
	}
}

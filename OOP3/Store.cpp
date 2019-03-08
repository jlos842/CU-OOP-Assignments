/*
Josef Los

Function definitions for the Tool store class
*/

#include "Store.h"
#include "Rental.h"
#include "Tool.h"
#include "Simulation.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>
#include <vector>

Tool t1 = {"Paint Tool 1", "Painting", 0, 10};
Tool t2 = {"Paint Tool 2", "Painting", 0, 10};
Tool t3 = {"Paint Tool 3", "Painting", 0, 10};
Tool t4 = {"Paint Tool 4", "Painting", 0, 10};
Tool t5 = {"Concrete Tool 1", "Concrete", 0, 20};
Tool t6 = {"Concrete Tool 2", "Concrete", 0, 20};
Tool t7 = {"Concrete Tool 3", "Concrete", 0, 20};
Tool t8 = {"Concrete Tool 4", "Concrete", 0, 20};
Tool t9 = {"Plumbing Tool 1", "Plumbing", 0, 25};
Tool t10 = {"Plumbing Tool 2", "Plumbing", 0, 25};
Tool t11 = {"Plumbing Tool 3", "Plumbing", 0, 25};
Tool t12 = {"Plumbing Tool 4", "Plumbing", 0, 25};
Tool t13 = {"Woodwork Tool 1", "Woodwork", 0, 15};
Tool t14 = {"Woodwork Tool 2", "Woodwork", 0, 15};
Tool t15 = {"Woodwork Tool 3", "Woodwork", 0, 15};
Tool t16 = {"Woodwork Tool 4", "Woodwork", 0, 15};
Tool t17 = {"Yardwork Tool 1", "Yardwork", 0, 5};
Tool t18 = {"Yardwork Tool 2", "Yardwork", 0, 5};
Tool t19 = {"Yardwork Tool 3", "Yardwork", 0, 5};
Tool t20 = {"Yardwork Tool 4", "Yardwork", 0, 5};

Tool toolarray[20] = {t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16, t17, t18, t19, t20};

Store::Store() : moneyEarned(0), toolsAvailable(20), inventory(toolarray)
{
}

int Store::getMoneyEarned() {return moneyEarned;}
int Store::getToolsAvailable() {return toolsAvailable;}
int Store::getRentListSize() {return rentList.size();}

void Store::printTools()
{
	for(int i = 0; i < 20; i++)
	{
		if(inventory[i].rentDaysLeft == 0)
		{
			std::cout << inventory[i].toolName << " is in the store"  << std::endl;			
		}
		else
		{
			std::cout << inventory[i].toolName << " has been rented. It'll be returned in " << inventory[i].rentDaysLeft << " day(s)." << std::endl; 
		}
	}
}

void Store::storeShuffle()
{
	std::random_shuffle(&inventory[0], &inventory[19]);
}

void Store::decrementRentDaysLeft()
{
	for(int i=0; i<20; i++)
	{
		if(inventory[i].rentDaysLeft > 0)
		{	
			inventory[i].rentDaysLeft--;	
			if(inventory[i].rentDaysLeft == 0) 
			{
				toolsAvailable++;
			}
		}
			
	}
	for(int i=0; i < rentList.size(); i++)
	{
		if(rentList[i].rentDay + rentList[i].rentLength == CURRENT_DAY)
		{
			rentList[i].activeRent = false;
		}
	}
}

void Store::rentOut(int numDays, int numTools, std::string customerName)
{	
	if(toolsAvailable >= numTools)
	{
		toolsAvailable -= numTools;
		Rental r;
		int toolsLeft = numTools;
		int i = 0;
		r.rentPrice = 0;
		while(toolsLeft > 0) 
		{					
			if(inventory[i].rentDaysLeft == 0)
			{
				r.toolsRented.push_back(inventory[i].toolName);	
				r.rentPrice += (inventory[i].price * numDays);

				inventory[i].rentDaysLeft = numDays;
				numTools--;
				toolsLeft--;
			}
			i++;
		}

		r.rentLength = numDays;
		r.customerName = customerName;
		r.rentDay = CURRENT_DAY;  
		r.activeRent = true;
		r.numToolsRented = numTools;

		moneyEarned += r.rentPrice;

		rentList.push_back(r);

	}
}

void Store::printRentals(bool active)
{
	std::string rentalTools;
	std::string formatLine = "--------------------------------------------------------------";
	bool printActive;
	if(active)
	{	
		std::cout << "\nACTIVE RENTALS\n\n" <<formatLine << std::endl;
		printActive = true;
	}
	else
	{	
		std::cout << "\nCOMPLETED RENTALS\n\n" <<formatLine << std::endl;
		printActive = false;
	}
	for(int i=0; i < rentList.size(); i++)
	{
		if(rentList[i].activeRent == printActive)
		{
			rentalTools = "";
			for(int j=0; j < rentList[i].toolsRented.size(); j++)
			{
				rentalTools.append(rentList[i].toolsRented[j]);
				if((j+1) != rentList[i].toolsRented.size())
				{
					rentalTools.append(", ");
				}
			}
			std::cout << "DAY "  << rentList[i].rentDay << "\nCustomer: " << rentList[i].customerName << "\nTool(s): " << rentalTools << "\nLength: " << rentList[i].rentLength << " days\nProfit: " << rentList[i].rentPrice << "$\n" << formatLine << std::endl;	
		}
	}
}

void Store::printReport()
{
	std::cout << "========================\n" << "RESULTS\n" << "========================\n" << std::endl; 
	std::cout << "MONEY EARNED: " << moneyEarned << "$" << std::endl;
	std::cout << "STATUS OF TOOLS IN STORE: " << std::endl;
	this->printTools();
	this->printRentals(true);
	this->printRentals(false);

	std::cout << "\n\nDONE\n\n";
}

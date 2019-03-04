/*
Josef Los

Header file for the store class. The store manages a list of Tools as well
as a vector of Rental objects.
*/

#ifndef STORE_H
#define STORE_H

#include "Rental.h"
#include "Tool.h"
#include <string>
#include <vector>

struct Rental; //Forward declaration

class Store
{
	public:
		Store();
		int getMoneyEarned();
		int getToolsAvailable();	
		void printTools();
		void storeShuffle(); 
		void rentOut(int numDays, int numTools, std::string customerName);
		void printActiveRentals();
		void printCompletedRentals();
		void decrementRentDaysLeft();
		int getRentListSize();
		Rental* getRental(int position);
	private:
		int moneyEarned, toolsAvailable;
		Tool inventory[20];
		std::vector<Rental> rentList;
};

#endif

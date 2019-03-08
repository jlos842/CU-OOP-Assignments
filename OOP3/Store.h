/*
Josef Los

Header file for the store class. The store manages a list of Tools as well
as a vector of Rental objects. It's also in charge of renting tools out to
customers and keeping track of data about the store such as money earned 
and the tools available. Lastly, the store generates the final report
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
		void storeShuffle(); //Helper function. Randomizes locations of tools in store
		void rentOut(int numDays, int numTools, std::string customerName); //Rents tools out to customers and creates a Rental object for rentList
		void printRentals(bool active);
		void decrementRentDaysLeft(); //Ran at the beginning of each day. Decrements the days a rental is out
		int getRentListSize();
		void printReport();
	private:
		int moneyEarned, toolsAvailable;
		Tool inventory[20];
		std::vector<Rental> rentList;
};

#endif

/*
Josef Los

Header file for the simulation class. This class will run the simulation
of the store, keep track of the all the moving parts, and print the final
report when finished
*/

#ifndef SIMULATION_H
#define SIMULATION_H

#include "Store.h"
#include "Customer.h"

extern int CURRENT_DAY;

class Simulation
{
	public:
		Simulation();
		//void runSimulation(int numDays); 
		//void startDay(); //Return tools and decrement day rentalDaysLeft counters
		//void openStore(); //Gets random selection of customers to come in an rent tools
		//void createReport(); //Create the final report
	private:
		Store simulatedStore;
		Customer customerList[10];
};

#endif

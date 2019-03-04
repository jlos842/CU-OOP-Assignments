/*
Josef Los

Function definitions for the Simulation class
*/

#include "Simulation.h"
#include "Customer.h"
#include "Store.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

Customer c1("Andrew", CASUAL); 
Customer c2("Barbara", CASUAL);
Customer c3("Charlie", CASUAL);
Customer c4("Diane", BUSINESS);
Customer c5("Earl", BUSINESS);
Customer c6("Fiona", BUSINESS);
Customer c7("Greg", REGULAR);
Customer c8("Holly", REGULAR);
Customer c9("Ian", REGULAR);
Customer c10("Jess", REGULAR);

Customer customers[10] = {c1, c2, c3, c4, c5, c6, c7, c8, c9, c10};

Store store();

int CURRENT_DAY;

Simulation::Simulation() : simulatedStore(), customerList(customers)
{
	CURRENT_DAY = 0;
}

void Simulation::startDay()
{
	CURRENT_DAY++;
	simulatedStore.storeShuffle();

	simulatedStore.decrementRentDaysLeft();

	std::cout << simulatedStore.getRentListSize() << std::endl;
	
	for(int i=0; i < simulatedStore.getRentListSize(); i++)
	{
		std::cout << "EH? " << simulatedStore.getRental(i)->rentDay << " + " << simulatedStore.getRental(i)->rentLength << std::endl; 
		if(simulatedStore.getRental(i)->rentDay + simulatedStore.getRental(i)->rentLength == CURRENT_DAY)
		{
			simulatedStore.getRental(i)->activeRent = false;
			for(int j=0; j < 10; j++)
			{
				if(customerList[j].getCustomerName() == simulatedStore.getRental(i)->customerName)
				{
					customerList[j].decrementNumTools(simulatedStore.getRental(i)->numToolsRented);
				}
			}
		}
	}
}

void Simulation::openStore()
{
	srand(time(0));
	int coin;

	
	for(int i=0; i < 10; i++)
	{	
		if(customerList[i].getMinToolsRented() > simulatedStore.getToolsAvailable())
		{
			; //Pass
		}
		else
		{
			coin = (rand() % 3) + 1;
			if(coin == 1)
			{
				customerList[i].rent(simulatedStore);
			}
		}
	}
}

void Simulation::createReport()
{
	
	std::string format = "==============================================";
	std::cout << format << "\n                  REPORT                       \n" << format << std::endl;
	std::cout << "\nMONEY EARNED: " << simulatedStore.getMoneyEarned() << std::endl;
	std::cout << "\nTOOLS IN STORE: \n" << std::endl;
	simulatedStore.printTools();
	std::cout << "\n";
	simulatedStore.printCompletedRentals();
	simulatedStore.printActiveRentals();	
}

void Simulation::runSimulation(int numDays)
{
	for(int i=0; i<numDays; i++)
	{
		startDay();
		openStore();	
	}
	createReport();
}

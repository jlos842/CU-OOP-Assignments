/* Josef Los

This is the main file that runs the simulation. It instanciates the the store
and customer objects and uses them to run the simulation. 
*/
#include "Simulation.h"
#include "Customer.h"
#include "Store.h"
#include "Tool.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


int main()
{	
	int NUM_DAYS = 35;

	Customer c1("Angela", 0);
	Customer c2("Ben", 0);
	Customer c3("Carrie", 0);
	Customer c4("David", 1);
	Customer c5("Estelle", 1);
	Customer c6("Frank", 1);
	Customer c7("Gabi", 2);
	Customer c8("Harry", 2);
	Customer c9("Irma", 2);
	Customer c10("Joe", 2);

	Customer customers[10] = {c1, c2, c3, c4, c5, c6, c7, c8, c9, c10};

	Store toolstore;

	srand(time(0));
	int ran;	

	for(int i=0; i < NUM_DAYS; i++)
	{	
		CURRENT_DAY++;
		toolstore.storeShuffle();
		toolstore.decrementRentDaysLeft();
		for(int k=0; k<10; k++)
		{
			customers[k].returnTools();
		}
		for(int j=0; j<10; j++)
		{	
			ran = rand() % 3;	
			if(ran == 0)
			{
				customers[j].rent(toolstore);
			}
		}
	}

	toolstore.printReport();

	return 0;
}

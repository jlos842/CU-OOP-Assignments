#include "Simulation.h"
#include "Customer.h"
#include "Store.h"
#include "Tool.h"
#include <iostream>
#include <string>

int main()
{
	Simulation toolStoreSimulation;

	toolStoreSimulation.runSimulation(10);
	return 0;
}

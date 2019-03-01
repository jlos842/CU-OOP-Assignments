/*
Josef Los

Function definitions for the Tool store class
*/

#include "Store.h"
#include "Tool.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>

	Tool t1 = {"Paint Tool 1", "Painting", 0, 10, NULL};
	Tool t2 = {"Paint Tool 2", "Painting", 0, 10, NULL};
	Tool t3 = {"Paint Tool 3", "Painting", 0, 10, NULL};
	Tool t4 = {"Paint Tool 4", "Painting", 0, 10, NULL};
	Tool t5 = {"Concrete Tool 1", "Concrete", 0, 20, NULL};
	Tool t6 = {"Concrete Tool 2", "Concrete", 0, 20, NULL};
	Tool t7 = {"Concrete Tool 3", "Concrete", 0, 20, NULL};
	Tool t8 = {"Concrete Tool 4", "Concrete", 0, 20, NULL};
	Tool t9 = {"Plumbing Tool 1", "Plumbing", 0, 25, NULL};
	Tool t10 = {"Plumbing Tool 2", "Plumbing", 0, 25, NULL};
	Tool t11 = {"Plumbing Tool 3", "Plumbing", 0, 25, NULL};
	Tool t12 = {"Plumbing Tool 4", "Plumbing", 0, 25, NULL};
	Tool t13 = {"Woodwork Tool 1", "Woodwork", 0, 15, NULL};
	Tool t14 = {"Woodwork Tool 2", "Woodwork", 0, 15, NULL};
	Tool t15 = {"Woodwork Tool 3", "Woodwork", 0, 15, NULL};
	Tool t16 = {"Woodwork Tool 4", "Woodwork", 0, 15, NULL};
	Tool t17 = {"Yardwork Tool 1", "Yardwork", 0, 5, NULL};
	Tool t18 = {"Yardwork Tool 1", "Yardwork", 0, 5, NULL};
	Tool t19 = {"Yardwork Tool 1", "Yardwork", 0, 5, NULL};
	Tool t20 = {"Yardwork Tool 1", "Yardwork", 0, 5, NULL};

Tool toolarray[20] = {t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16, t17, t18, t19, t20};

Store::Store() : moneyEarned(0), toolsAvailable(20), inventory(toolarray)
{
}

int Store::getMoneyEarned() {return moneyEarned;}
int Store::getToolsAvailable() {return toolsAvailable;}
void Store::printTools()
{
	for(int i = 0; i < 20; i++)
	{
		std::cout << inventory[i].toolName << std::endl;			
	}
}

void Store::storeShuffle()
{
	srand(time(0));
	std::random_shuffle(&inventory[0], &inventory[19]);
}

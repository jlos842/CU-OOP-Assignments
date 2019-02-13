//The main test function for the shape, display, and database classes

#include <iostream>
#include <string>
#include <vector>
#include "shapes.h"
#include "display.h"

int main()
{
	Circle myCircle("Bob");
	Triangle myTriangle("Clara");
	Square mySquare("Angelo");
	
	Database myDatabase;

	myDatabase.addShape(&myCircle);
	myDatabase.addShape(&mySquare);
	myDatabase.addShape(&myTriangle);

	myDatabase.listShapes();

	std::cout << "\n --------- \n" << std::endl;

	myDatabase.sortShapes();

	myDatabase.listShapes();

	return 0;
}

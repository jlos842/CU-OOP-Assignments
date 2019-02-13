//Function definitions for the various display and database methods

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include "display.h"
#include "shapes.h"

void Display::display(std::string n, int s)
{
	std::cout << "My name is " << n << " and I am a " << shapeBySides(s) << ". I have " << s << " sides!" << std::endl;	
}

std::string Display::shapeBySides(int s)
{
	std::string shapeName;
	switch (s) {
		case 0:
			shapeName = "Circle";
			break;
		case 3:
			shapeName = "Triangle";
			break;
		case 4:
			shapeName = "Square";
			break;
	}

	return shapeName;
}

void Database::addShape(Shape *s)
{
	shapes.push_back(s);
}

void Database::sortShapes()
{
	std::sort(shapes.begin(), shapes.end());		
}

void Database::listShapes()
{
	for(int i=0; i < shapes.size(); i++)
	{
		shapes.at(i)->display();
	}
}


//Function definitions for the various shapes

#include <iostream>
#include <string>
#include "shapes.h"
#include "display.h"

std::string Shape::getName()
{
	return name;
}

int Shape::getSides()
{
	return sides;
}

bool Shape::operator < (const Shape& other) const //Specifies how to compare objects. Sort by number of sides
{
	return (sides < other.sides);
}

Circle::Circle(std::string n)
{
	name = n;
	sides = 0;
	displayMethod = Display();
}

Triangle::Triangle(std::string n)
{
	name = n;
	sides = 3;
	displayMethod = Display();
}

Square::Square(std::string n)
{
	name = n;
	sides = 4;
	displayMethod = Display();
}

void Circle::display()
{
	displayMethod.display(name, sides);	
}

void Triangle::display()
{
	displayMethod.display(name, sides);	
}

void Square::display()
{
	displayMethod.display(name, sides);	
}

//The header file for the display and database classes

#ifndef DISPLAY_H
#define DISPLAY_H

#include <string>
#include <vector>

class Shape;

class Display
{
	public:
		void display(std::string n, int s);
	private:
		std::string shapeBySides(int s);
};

class Database
{
	public:
		void addShape(Shape *s);
		void sortShapes();
		void listShapes();
	private:
		std::vector<Shape*> shapes;	
};
#endif

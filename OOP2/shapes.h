//Header file for the Shape abstract class and its various subclasses

#ifndef SHAPES_H
#define SHAPES_H

#include <string>
#include "display.h"

class Shape
{
	public:
		std::string getName();
		int getSides();
		virtual void display() = 0; //Makes this class abstract. This method MUST be overwritten
		bool operator < (const Shape& other) const; 
	protected:
		std::string name;
		int sides;
		Display displayMethod; //Each shape now HAS-A Display object. This is delegation
};

class Circle : public Shape
{
	public:
		void display();	
		Circle(std::string n);
};

class Triangle : public Shape
{
	public:
		void display();
		Triangle(std::string n);
};

class Square : public Shape
{
	public:
		void display();
		Square(std::string n);
};

#endif

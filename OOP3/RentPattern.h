/*
Josef Los

Header file for the RentPattern class. This is the class that'll contain the
various methods used by Customers to rent tools. Each customer will have their
own RentPattern. The rentpattern also keeps track of when to 'return' the tools
to the store, so the customer can rent more. The RentPattern object is an example
of the strategy pattern.
*/

#ifndef RENTPATTERN_H
#define RENTPATTERN_H

#include <string>
#include <tuple>
#include <vector>

class Store; //Forward Declaration

class RentPattern
{
	public:
		virtual void rentTools(Store &toolstore) {};	
		void returnTools();
	protected:
		std::string customerName;	
		int *numToolsPointer;
		std::vector<std::tuple<int, int>> returnDates;
};

class CasualPattern : public RentPattern
{
	public:
		void rentTools(Store &toolstore);
		CasualPattern(std::string name, int *numTools);
};


class BusinessPattern : public RentPattern
{
	public:
		void rentTools(Store &toolstore);
		BusinessPattern(std::string name, int *numTools);
};

class RegularPattern : public RentPattern
{
	public:
		void rentTools(Store &toolstore);
		RegularPattern(std::string name, int *numTools);
};


#endif

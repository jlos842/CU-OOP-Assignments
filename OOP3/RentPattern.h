/*
Josef Los

Header file for the RentPattern class. This is the class that'll contain the
various methods used by Customers to rent tools
*/

#ifndef RENTPATTERN_H
#define RENTPATTERN_H

#include <string>

class Store; //Forward Declaration

class RentPattern
{
	public:
		virtual void rentTools(Store &toolstore) {};	
	protected:
		std::string customerName;	
		int *numToolsPointer;
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

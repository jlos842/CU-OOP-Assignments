/*
Josef Los

Header file for the RentPattern class. This is the class that'll contain the
various methods used by Customers to rent tools
*/

#ifndef RENTPATTERN_H
#define RENTPATTERN_H


class RentPattern
{
	public:
		virtual void rentTools() {};	
	protected:
		int minTools, maxTools, minNights, maxNights;
};

class CasualPattern : public RentPattern
{
	public:
		void rentTools();
		CasualPattern();
};

class BusinessPattern : public RentPattern
{
	public:
		void rentTools();
		BusinessPattern();
};

class RegularPattern : public RentPattern
{
	public:
		void rentTools();
		RegularPattern();
};


#endif

/*
Josef Los

Header file for the RentPattern class. This is the class that'll contain the
various methods used by Customers to rent tools
*/

#ifndef RENTPATTERN_H
#define RENTPATTERN_H

class Store; //Forward Declaration

class RentPattern
{
	public:
		virtual void rentTools(Store &toolstore) {};	
	protected:
		int minTools, maxTools, minNights, maxNights;
};

class CasualPattern : public RentPattern
{
	public:
		void rentTools(Store &toolstore);
		CasualPattern();
};


class BusinessPattern : public RentPattern
{
	public:
		void rentTools(Store &toolstore);
		BusinessPattern();
};

class RegularPattern : public RentPattern
{
	public:
		void rentTools(Store &toolstore);
		RegularPattern();
};


#endif

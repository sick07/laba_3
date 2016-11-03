#pragma once
#include "continent.h"
#include "continent.h"
class state : public continent
{
	char *capital;
public:
	class nested {
		char *number_of_people;
	public:
		void setnumber_of_people(char *number_of_people);
		void getnumber_of_people();
	};
	void setcapital(char *capital);
	void getcapital();
};
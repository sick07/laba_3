#pragma once
#include "land.h"
#include "continent.h"
class island : public continent
{
	char *distance_to_the_continent;
public:
	void setdistance_to_the_continent(char *distance_to_the_continent);
	void getdistance_to_the_continent();
};

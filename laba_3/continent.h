#pragma once
#include "land.h"
class continent : public land
{
	char *name;
public:
	void setname(char *name);
	void getname();
};	
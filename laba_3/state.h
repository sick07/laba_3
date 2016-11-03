#pragma once
#include "continent.h"
#include "continent.h"
class state : public continent
{
	char *capital;
public:
	void setcapital(char *capital);
	void getcapital();
};
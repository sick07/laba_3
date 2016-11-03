#include "stdafx.h"
#include "state.h"
#include "iostream"

using namespace std;

void state::setcapital(char *capital)
{
	this->capital = capital;
}

void state::getcapital()
{
	cout << "Capital: " << this->capital << endl;
}
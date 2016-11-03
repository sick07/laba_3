#include "stdafx.h"
#include "continent.h"
#include "iostream"

using namespace std;

void continent::setname(char *name)
{
	this->name = name;
}

void continent::getname()
{
	cout << "Name: " << this->name << endl;
}
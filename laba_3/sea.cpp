#include "stdafx.h"
#include "sea.h"
#include "iostream"

using namespace std;

void sea::setname(char *name)
{
	this->name = name;
}

void sea::getname()
{
	cout << "Name: " << this->name << endl;
}
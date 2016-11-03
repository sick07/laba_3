#include "stdafx.h"
#include "land.h"
#include "iostream"

using namespace std;

void land::setarea(char *area)
{
	this->area = area;
}

void land::getarea()
{
	cout << "Area: " << this->area << endl;
}
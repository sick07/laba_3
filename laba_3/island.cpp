#include "stdafx.h"
#include "island.h"
#include "iostream"

using namespace std;

void island::setdistance_to_the_continent(char *distance_to_the_continent)
{
	this->distance_to_the_continent = distance_to_the_continent;
}

void island::getdistance_to_the_continent()
{
	cout << "Distance to the continent: " << this->distance_to_the_continent << endl;
}
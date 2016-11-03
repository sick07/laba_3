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

void state::nested::setnumber_of_people(char *number_of_people)
{
	this->number_of_people = number_of_people;
}

void state::nested::getnumber_of_people()
{
	cout << "Number of people: " << this->number_of_people << endl;
}
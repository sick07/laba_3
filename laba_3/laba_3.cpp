// laba_3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "sea.h"
#include "land.h"
#include "continent.h"
#include "island.h"
#include "state.h"
#include "iostream"

using namespace std;

int main()
{

	cout << "Information about the sea:" << endl;

	sea name;
	name.setname("Coro");
	name.getname();

	cout << endl;

	cout << "Information about the continent:" << endl;

	continent area;
	area.setarea("54 759 000 km2");
	area.getarea();
	area.setname("Eurasia");
	area.getname();

	cout << endl;

	cout << "Information about the island:" << endl;

	island distance_to_the_continent;
	distance_to_the_continent.setarea("65 000 km2");
	distance_to_the_continent.getarea();
	distance_to_the_continent.setname("Sri Lanka");
	distance_to_the_continent.getname();
	distance_to_the_continent.setdistance_to_the_continent("200 km");
	distance_to_the_continent.getdistance_to_the_continent();

	cout << endl;

	cout << "Information about the state:" << endl;

	state capital;
	capital.setarea("207 595 km2");
	capital.getarea();
	capital.setname("Belarus");
	capital.getname();
	capital.setcapital("Minsk");
	capital.getcapital();
	state::nested number_of_people;
	number_of_people.setnumber_of_people("10 000 000 people");
	number_of_people.getnumber_of_people();

	cout << endl;

    return 0;
}


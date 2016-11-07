#include "stdafx.h"
#include "Race.h"
#include <iostream>





string races[4] = { "Human", "Orc", "Dwarf", "Gnome" };

string raceLetters[4] = { "h", "o", "d", "g" };

Race::Race(string myRace)
{
	for (int i = 0; i <= sizeof(races); i++)
	{
		if (race == races[i])
		{
			break;
		}
		else if (i == sizeof(races))
		{
			cout << "Please enter a value letter";
			cin >> race;
			i = 0;
		}
		i++;
	}

	while (myRace != raceLetters[count])
	{
		count++;
	}
	myRace = races[count];

	race = myRace;
}

void Race::getRace()
{
	cout << "You are of race " << race << endl;
}

Race::~Race()
{
}

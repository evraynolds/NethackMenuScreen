// MyGameCW.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Character.h"
#include "Dungeon.h"
#include "Role.h"
#include "Race.h"

int main()
{
	
	
	string name, chooseRole, chooseRace;

	cout << "Who are you?" << endl;
	cin >> name;

	cout << endl;
	cout << "Press a for Archeologist" << endl;
	cout << "Press b for Barbarian" << endl;
	cout << "Press c for Caveman" << endl;
	cout << "Press d for Healer" << endl;
	cout << "Press e for Knight" << endl;
	cout << "Press f for Monk" << endl;
	cout << "Press g for Priest" << endl;
	cout << "Press h for Rogue" << endl;
	cout << "Press i for Ranger" << endl;
	cout << "Press j for Samurai" << endl;
	cout << "Press k for Tourist" << endl;
	cout << "Press l for Valkyrie" << endl;
	cout << "Press m for Wizard" << endl;
	cout << "Select your Role: ";
	cin >> chooseRole;

	

	cout << endl;
	cout << "Press h for Human" << endl;
	cout << "Press o for Orc" << endl;
	cout << "Press d for Dwarf" << endl;
	cout << "Press g for Gnome" << endl;
	cout << "Select a race: ";
	cin >> chooseRace;
	cout << endl;
	
	Character c(chooseRole, chooseRace);
	c.setName(name);

	c.getCharacterDescription();
	Dungeon d(5);
	d.getDungeonDescritpion(5);

	system("PAUSE");
	return 0;
}


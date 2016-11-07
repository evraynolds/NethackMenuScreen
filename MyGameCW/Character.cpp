#include "stdafx.h"
#include "Character.h"
#include "Role.h"


Character::Character( string chosenRole, string chosenRace)
{
	role = new Role(chosenRole);
	race = new Race(chosenRace);
	
}

void Character::setName(string chosenName)
{
	
	 name = chosenName;
}

void Character::getCharacterDescription()
{
	cout << "----Character description----" << endl;
	cout << endl;
	cout << "Your name is " << name << endl;
	role->getRole();
	race->getRace();
	cout << endl;
}
Character::~Character()
{
}

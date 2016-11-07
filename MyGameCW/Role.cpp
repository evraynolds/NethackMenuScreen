#include "stdafx.h"
#include "Role.h"
#include <string>
#include <iostream>





string roles[13] = { "Archealogist", "Barbarian", "Caveman", "Healer", "Knight", "Monk", "Priest", "Rogue", "Ranger", "Samurai", "Tourist", "Valkyrie", "Wizard" };

string roleLetters[13] = { "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m" };

Role::Role(string myRole)
{	
	for (int i = 0; i <= sizeof(roles); i++)
	{
		if (role == roles[i])
		{
			break;
		}
		else if (i == sizeof(roles))
		{
			cout << "Please enter a value letter";
			cin >> role;
			i = 0;
		}
		i++;
	}

	while (myRole != roleLetters[counter])
	{
		counter++;
	}
	myRole = roles[counter];

	role = myRole;
}




void Role::getRole()
{
	cout << "You are of role " << role << endl;;
}


Role::~Role()
{
}

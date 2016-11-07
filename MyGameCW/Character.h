#pragma once
#include <string>
#include <iostream>
#include "Role.h"
#include "Race.h"

using namespace std;

class Character
{
private:
	string name;
	Role *role;
	Race *race;
	
public:
	Character(string role, string race);  
	void setName(string name);
	void getCharacterDescription();
	~Character();
};


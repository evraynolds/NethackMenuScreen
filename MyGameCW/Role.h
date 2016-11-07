#pragma once
#include <string>

using namespace std;

class Role
{
private:
	string myCharacter;
	int counter = 0;
	
	string role;
public:
	Role(string myRole);
	
	void getRole();
	~Role();
};


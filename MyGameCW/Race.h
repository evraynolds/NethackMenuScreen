#pragma once
#include <string>


using namespace std;



class Race
{
private:
	string race;
	int count = 0;
	

	string myCharacterRace;
public:
	Race(string race);
	
	void getRace();
	~Race();
};


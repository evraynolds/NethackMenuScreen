#pragma once
#include "Level.h"
#include <string>

using namespace std;


class Dungeon
{
private:
	Level *lvl;

public:
	Dungeon(int level);
	void getDungeonDescritpion(int);
	~Dungeon();
};


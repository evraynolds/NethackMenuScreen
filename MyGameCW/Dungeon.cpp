#include "stdafx.h"
#include "Dungeon.h"


Dungeon::Dungeon(int level)
{
	lvl = new Level(level);
}

void Dungeon::getDungeonDescritpion(int levelNum)
{
	lvl->getNumOfRooms();
}

Dungeon::~Dungeon()
{
}

#pragma once
#include "Room.h"
#include "Hallway.h"


class Level
{
private:
	int currentLevel = 0;
	int numOfRooms;
	Room *room;
	Hallway *hallway;
	
public:
	Level(int);
	int getNumOfRooms();
	~Level();
};


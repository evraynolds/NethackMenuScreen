#pragma once
#include "Stair.h"
#include "Door.h"
#include "Trap.h"
#include "Item.h"


class Room
{
private:
	Stair *stair;
	Door *door;
	Trap *trap;
	Gem *gem;
	Gold *gold;
	Weapon *weapon;
	Helmet *helmet;
	Chainmail *chainmail;
	Book *book;
	Scroll *scroll;
	Ration *ration;
	Potion *potion;
	Tool *tool;
	int roomNum;
public:
	Room(int);
	int getRoomNum();
	~Room();
};


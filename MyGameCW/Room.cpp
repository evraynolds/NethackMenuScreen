#include "stdafx.h"
#include "Room.h"
#include <ctime>
#include <stdlib.h>
#include <iostream>

using namespace std;

Room::Room(int numRoomsInLevel)
{
	srand((unsigned int)time(NULL));
	roomNum = rand() % numRoomsInLevel + 1;

	stair = new Stair(roomNum);
	door = new Door(roomNum);
	trap = new Trap(roomNum);
	gem = new Gem();
	gold = new Gold();
	weapon = new Weapon();
	chainmail = new Chainmail();
	helmet = new Helmet();
	ration = new Ration();
	book = new Book();
	scroll = new Scroll();
	potion = new Potion();
	tool = new Tool();
}

int Room::getRoomNum()
{
	cout << "You are in room " << roomNum << endl;
	stair->isStairs();
	door->getNumOfDoors();
	trap->isTrap();

	gem->getGem();
	gold->getGold();
	weapon->getWeapon();
	chainmail->getChainmail();
	helmet->getHelmet();
	ration->getRation();
	book->getBook();
	scroll->getScroll();
	potion->getPotion();
	tool->getTool();

	return roomNum;
}

Room::~Room()
{
}

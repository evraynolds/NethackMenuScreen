#include "stdafx.h"
#include "Level.h"
#include <ctime>
#include <stdlib.h>
#include <iostream>

using namespace std;

Level::Level(int levelNum)
{
	srand((unsigned int)time(NULL));
	numOfRooms = rand() % 6 + 2;

	currentLevel = levelNum;
	room = new Room(numOfRooms);
	hallway = new Hallway();
}

int Level::getNumOfRooms()
{
	cout << "----Room Description----" << endl;
	cout << endl;
	cout << "There are " << numOfRooms << " rooms on this level" << endl;
	room->getRoomNum();
	cout << endl;
	
	return numOfRooms;

}

Level::~Level()
{
}
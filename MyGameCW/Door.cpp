#include "stdafx.h"
#include "Door.h"
#include <stdlib.h>
#include <ctime>
#include <iostream>

using namespace std;


Door::Door(int roomNum)
{
	srand(time(NULL));
	numOfDoors = rand() % 5 + 1;

}

void Door::getNumOfDoors()
{
	cout << "This room has " << numOfDoors << " doors." << endl;
	
}

Door::~Door()
{
}

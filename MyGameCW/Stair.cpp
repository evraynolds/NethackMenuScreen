#include "stdafx.h"
#include "Stair.h"
#include <ctime>
#include <stdlib.h>
#include <iostream>

using namespace std;

Stair::Stair(int roomNum)
{
	srand(time(NULL));
	bin = rand() % 2 + 1;

	if (bin == 1)
	{
		stairs = true;
	}
	else if (bin == 2)
	{
		stairs = false;
	}
}

void Stair::isStairs()
{
	if (stairs)
	{
		cout << "This room has a set of stairs." << endl;
	}
	else
	{
		cout << "This room does not have a set of stairs." << endl;
	}
}

Stair::~Stair()
{
}

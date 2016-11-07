#include "stdafx.h"
#include "Trap.h"
#include <stdlib.h>
#include <ctime>
#include <iostream>

using namespace std;


Trap::Trap(int roomNum)
{
	srand(time(NULL));
	bin = rand() % 2 + 1;

	if (bin == 1)
	{
		trap = true;
	}
	else if (bin == 2)
	{
		trap = false;
	}

}

void Trap::isTrap()
{
	if (trap)
	{
		cout << "This room has a trap." << endl;
	}
	else
	{
		cout << "This room does not have a trap." << endl;
	}
}


Trap::~Trap()
{
}

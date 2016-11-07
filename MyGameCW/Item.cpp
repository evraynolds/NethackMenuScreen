#include "stdafx.h"
#include "Item.h"
#include <stdlib.h>
#include <ctime>
#include <iostream>

using namespace std;


Item::Item(int roomNum)
{
	
	/*gem = new Gem();
	gold = new Gold();
	weapon = new Weapon();
	armour = new Armour();
	tool = new Tool();
	readableItem = new ReadableItem();
	comestible = new Comestible();*/

}


void Item::getItem()
{
	getGold();
	getGem();
    getWeapon();
	getArmour();
	getTool();
	getReadableItem();
	getComestible();

}

void Gold::getGold() 
{
	srand((unsigned int)time(NULL));
	goldOdds = rand() % 2 + 1;

	if (goldOdds == 1)
	{
		cout << "There is gold in this room." << endl;
	}
	else
	{
		cout << "There is no gold in this room." << endl;
	}


}

void Gem::getGem() 
{
	srand((unsigned int)time(NULL));
	gemOdds = rand() % 3 + 1;

	if (gemOdds == 1)
	{
		cout << "There are no gems in this room." << endl;
	}
	else
	{
		cout << "There are no gems in this room." << endl;
	}

}
void Weapon::getWeapon() 
{
	srand((unsigned int)time(NULL));
	weaponOdds = rand() % 10 + 1;

	if (weaponOdds == 1)
	{
		cout << "There are weapons in this room." << endl;
	}
	else
	{
		cout << "There are no weapons in this room." << endl;
	}
}



void Armour::getArmour()
{
	/*helmet = new Helmet();
	chainmail = new Chainmail();
	
	getHelmet();
	getChainmail();
	*/
}

void Helmet::getHelmet()
{
	srand((unsigned int)time(NULL));
	helmetOdds = rand() % 15 + 1;

	if (helmetOdds == 1)
	{
		cout << "There is a helmet in this room." << endl;
	}
	else
	{
		cout << "There is no helmet in this room." << endl;
	}
}

void Chainmail::getChainmail()
{
	srand((unsigned int)time(NULL));;
	chainmailOdds = rand() % 15 + 1;

	if (chainmailOdds == 1)
	{
		cout << "There is chainmail in this room." << endl;
	}
	else
	{
		cout << "There is no chainmail in this room." << endl;
	}
}

void Tool::getTool()
{
	srand((unsigned int)time(NULL));
	toolOdds = rand() % 20 + 1;

	if (toolOdds == 1)
	{
		cout << "There is a tool in this room." << endl;
	}
	else
	{
		cout << "There are no tools in this room." << endl;
	}
}



void ReadableItem::getReadableItem()
{
	/*book = new Book();
	scroll = new Scroll();
	
	getBook();
	getScroll();
	*/
}

void Book::getBook()
{
	srand((unsigned int)time(NULL));
	bookOdds = rand() % 5 + 1;

	if (bookOdds == 1)
	{
		cout << "There is a book in this room." << endl;
	}
	else
	{
		cout << "There are no books in this room." << endl;
	}
}

void Scroll::getScroll()
{
	srand((unsigned int)time(NULL));
	scrollOdds = rand() % 4 + 1;

	if (scrollOdds == 1)
	{
		cout << "There is a scroll in this room." << endl;
	}
	else
	{
		cout << "There are no scrolls in this room." << endl;
	}
}



void Comestible::getComestible()
{
	/*potion = new Potion();
	food = new Food();
	
	getPotion();
	getFood();
	*/
}

void Potion::getPotion()
{
	srand((unsigned int)time(NULL));
	potionOdds = rand() % 2 + 1;

	if (potionOdds == 1)
	{
		cout << "There is a potion in this room." << endl;
	}
	else
	{
		cout << "There are no potions in this room." << endl;
	}
}

void Food::getFood()
{
	getRation();
}

void Ration::getRation()
{
	srand((unsigned int)time(NULL));
	rationOdds = rand() % 3 + 1;

	if (rationOdds == 1)
	{
		cout << "There is a potion in this room." << endl;
	}
	else
	{
		cout << "There are no potions in this room." << endl;
	}
}

void Corpse::getCorpse()
{

}

Item::~Item()
{
}

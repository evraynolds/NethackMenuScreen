#pragma once
#include <stdlib.h>
#include <string>
#include <iostream>


using namespace std;

class Item
{
private:
	/*Gem *gem;
	Gold *gold;
	Weapon *weapon;
	Armour *armour;
	Tool *tool;
	Comestible *comestible;
	ReadableItem *readableItem;*/
public:
	Item(int);
	virtual void getGold() = 0;
	virtual void getGem() = 0;
	virtual void getWeapon() = 0;
	virtual void getArmour() = 0;
	virtual void getTool() = 0;
	virtual void getComestible() = 0;
	virtual void getReadableItem() = 0;
	
	void getItem();
	~Item();
};

class Gem 
{
private:
	int gemOdds = 0;
public:
	Gem(){};
	 void getGem();
	 ~Gem();
};

class Gold 
{
private:
	
	int goldOdds = 0;
public:
	Gold(){};
	void getGold();
	~Gold();
};

class Weapon
{
private:
	int weaponOdds = 0;
public:
	Weapon(){};
	 void getWeapon();
	 ~Weapon();
};

class Armour
{
private:
	/*Helmet* helmet;
	Chainmail* chainmail;*/
	int armourOdds = 0;
	
public:
	Armour(){};
	 void getArmour();
	/* virtual void getHelmet() = 0;
	 virtual void getChainmail() = 0;*/
	 ~Armour(){};
};

class Helmet 
{
private:
	int helmetOdds = 0;
public:
	Helmet(){};
	 void getHelmet();
	 ~Helmet();
};

class Chainmail 
{
private:
	int chainmailOdds = 0;
public:
	Chainmail(){};
	 void getChainmail();
	 ~Chainmail();
};

class Tool 
{
private:
	int toolOdds = 0;
public:
	Tool(){};
	 void getTool();
	 ~Tool();
};

class ReadableItem 
{
private:
	/*Book* book;
	Scroll* scroll;*/
public:
	ReadableItem();
	void getReadableItem();
	/*virtual void getBook() = 0;
	virtual void getScroll() = 0;
	*/
	~ReadableItem();
};

class Book 
{
private:
	int bookOdds = 0;
public:
	Book(){};
	 void getBook();
	 ~Book();
};

class Scroll 
{
private:
	int scrollOdds;
public:
	Scroll(){};
	 void getScroll();
	 ~Scroll();
};

class Comestible
{
	/*Potion* potion;
	Food* food;*/
public:
	
	void getComestible();
	/*virtual void getPotion() = 0;
	virtual void getFood() = 0;
	*/
};

class Potion 
{
private:
	int potionOdds = 0;
public: 
	Potion(){};
	 void getPotion();
	 ~Potion();
};

class Food
{
private:
	/*Ration* ration;
	Corpse* corpse;*/
public:
	virtual void getRation() = 0;
	virtual void getCorpse() = 0;
	void getFood();
	
};

class Ration 
{
private:
	int rationOdds = 0;
public:
	Ration(){};
	 void getRation();
	 ~Ration();
};

class Corpse 
{private:
	int corpseOdds = 0;
public:
	 void getCorpse();
};

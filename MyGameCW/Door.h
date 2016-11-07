#pragma once




class Door
{
private:
	int numOfDoors;
public:
	Door(int);
	void getNumOfDoors();
	~Door();
};


class SecretDoor : Door
{

public:
	SecretDoor();
	~SecretDoor();
};
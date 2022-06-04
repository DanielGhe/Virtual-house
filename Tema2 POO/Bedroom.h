#pragma once
#include <vector>
#include "ISensor.h"
#include "IRoom.h"
using namespace std;

class Bedroom :public IRoom
{
public:
	Bedroom();
	void createRoom(int number);
	void deleteRoom(int number);
	void updateRoom(int number);
	void readRoom(int number);


private:
	vector<ISensor*> sensors;
};


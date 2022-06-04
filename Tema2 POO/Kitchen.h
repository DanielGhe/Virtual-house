#pragma once
#include <vector>
#include "ISensor.h"
#include "IRoom.h"
using namespace std;

class Kitchen :public IRoom
{
public:
	Kitchen();
	void createRoom(int number);
	void deleteRoom(int number);
	void updateRoom(int number);
	void readRoom(int number);


private:
	vector<ISensor*> sensors;

};


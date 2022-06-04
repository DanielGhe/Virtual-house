#pragma once
#include <vector>
#include "ISensor.h"
#include "IRoom.h"
using namespace std;

class House
{

public:
	
	
	
	void addRoom(IRoom*);
	void removeRoom(int);
	void collectRoomData();
	void viewRoomData();
private:
	vector<IRoom*> rooms;
	int counter=0;
	vector<int> counters;
};


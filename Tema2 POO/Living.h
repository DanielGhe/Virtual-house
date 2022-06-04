#pragma once
#include <vector>
#include "ISensor.h"
#include "IRoom.h"
using namespace std;

class Living:public IRoom
{
public:
	Living();
	void createRoom(int);
	void readRoom(int);
	void updateRoom(int);
	void deleteRoom(int) ;

private:
	vector<ISensor*> sensors;
};


#pragma once

class IRoom
{
public:
	virtual void createRoom(int) = 0;
	virtual void readRoom(int) = 0;
	virtual void updateRoom(int) = 0;
	virtual void deleteRoom(int) = 0;
};


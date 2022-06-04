#include "House.h"
#include <fstream>
#include <iostream>
#include "IRoom.h"
#include <iomanip>
#include "Bathroom.h"
#include "Bedroom.h"
#include "Kitchen.h"
#include "Living.h"
#include <string>
#include <algorithm>


void House::addRoom(IRoom* room)
{//creaza camera
		room->createRoom(counter);
		rooms.push_back(room); 	
		//incrementeaza counterul care tine evidenta numarului de camera
		counters.push_back(counter);
		counter++;
		 
}

void House::removeRoom(int i)
{//verifica daca exista camera, daca da, e se sterg camera si indexul acesteia, implicit pozitia din counter
	
		try {
			rooms[i]->deleteRoom(counters[i]);
			rooms.erase(rooms.begin() + i);
			counters.erase(counters.begin() + i);
		}
		catch (...) {
			cout << "Nu exista camere!" << endl;
		}
	
	
}

void House::collectRoomData()
{//colecteaza date despre camerele existente, daca acestea exista
	try {
		for (int i = 0; i<rooms.size();i++) {
			rooms[i]->updateRoom(counters[i]);
		}
	}
	catch(...) {
		cout << "Nu exista camere!" << endl;
	}
}

void House::viewRoomData()
{//afiseaza date despre camerele existente, daca acestea exista
	if (rooms.size() == 0) {
		cout << "Nu exista camere!" << endl;
	}
	else {
		//parcurge camerele, daca acestea exista
		cout << setw(12)<<"Camera" << setw(12)<<"Temperatura" << setw(12) << "Umiditate" << setw(12)<<"Presiune " << endl;
		for (int i = 0; i < rooms.size(); i++) {
			rooms[i]->readRoom(counters[i]);
		}
	}
}

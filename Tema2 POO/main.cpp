
#include <iostream>
#include "ISensor.h"
#include "Temperature.h"
#include "Living.h"
#include "Humidity.h"
#include "Pressure.h"
#include "Bedroom.h"
#include "Kitchen.h"
#include "Bathroom.h"
#include "House.h"

using namespace std;

int main()
{//seed pt generarea nr random
    srand(time(0));

    House house;
    house.addRoom(new Bathroom());
    house.addRoom(new Bathroom());
    house.addRoom(new Kitchen());
    house.addRoom(new Bedroom());
    house.addRoom(new Living());

    house.collectRoomData();
    house.viewRoomData();
    house.removeRoom(1);
    house.collectRoomData();
    house.viewRoomData();
  
}
  
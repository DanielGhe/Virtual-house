#pragma once
#include "ISensor.h"
class Humidity :public ISensor
{
public:
	Humidity();
	double readSensor();
private:
	double generateHumidity();
};


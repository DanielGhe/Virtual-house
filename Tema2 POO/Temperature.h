#pragma once
#include "ISensor.h"
class Temperature:public ISensor
{
public:
	Temperature();
	double readSensor();
private:
	double generateTemperature();
};


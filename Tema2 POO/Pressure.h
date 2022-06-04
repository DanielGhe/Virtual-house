#pragma once
#include "ISensor.h"
class Pressure :public ISensor
{
public:
	Pressure();
	double readSensor();
private:
	double generatePressure();
};


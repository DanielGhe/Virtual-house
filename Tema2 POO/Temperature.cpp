#include "Temperature.h"
#include <stdlib.h>
#include <iostream>

double Temperature::generateTemperature() {
	//functie de generare a unui nr random intregi intr-un anumit interval
	double randTemp = rand() % 80 + -40;
	return randTemp;
}
//constructor pentru a putea genera obiecte de tip humidity
Temperature::Temperature()
{
}

double Temperature::readSensor(){
	Temperature t;
	return t.generateTemperature();
}

#include "Pressure.h"
#include <stdlib.h>
#include <iostream>

double Pressure::generatePressure() {
	//functie de generare a unui nr random intregi intr-un anumit interval
	double randTemp = rand() % 1100 + 300;
	return randTemp;
}
//constructor pentru a putea genera obiecte de tip pressure

Pressure::Pressure()
{
}

double Pressure::readSensor() {
	Pressure p;
	return p.generatePressure();
}
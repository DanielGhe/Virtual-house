
#include "Humidity.h"
#include <stdlib.h>
#include <iostream>
#include <random>

double Humidity::generateHumidity() {
	//functie generatoare de nr de tip double random intr-un anumit interval
	double randTemp = ((double)rand() * (99.9 - 1.0) / (double)RAND_MAX - 1.0);
	return randTemp;
}
//constructor pentru a putea genera obiecte de tip humidity
Humidity::Humidity()
{
}

double Humidity::readSensor() {
	Humidity h;
	return h.generateHumidity();
}
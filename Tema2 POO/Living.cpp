#include "Living.h"
#include <fstream>
#include "Temperature.h"
#include "Humidity.h"
#include "Pressure.h"
#include <iostream>
#include <iomanip>
#include <string> 
using namespace std;

//constructor pt a putea genera camera si folosi functii virtuale pure
Living::Living()
{
}

void Living::createRoom(int number) {
	string path = "Living" + to_string(number) + ".txt";
	ofstream file(path);
	//genereaza senzorii camerei
	vector<ISensor*> pop_sensors{ new Temperature(), new Humidity(), new Pressure() };
	//adauga senzorii in vectorul de senzori
	for (auto* s : pop_sensors) {
		sensors.push_back(s);
	}

	file.close();
}

void Living::deleteRoom(int number) {
	//eroare daca nu reuseste sa stearga camera
	string path = "Living" + to_string(number) + ".txt";
	const char* c = path.c_str();
	if (remove(c) != 0)
		perror("Eroare");
	else
		puts("Camera stearsa");
}

void Living::updateRoom(int number) {
	//deschide fila(isi pastreaza datele de la ios_base
	string path = "Living" + to_string(number) + ".txt";
	ofstream file(path, std::ios_base::app);
	//scrie numele camerei la inceputul masuratorii
	file << "Living" + to_string(number) + " ";
	for (int i = 0; i < sensors.size(); i++) {
		//genereaza valori pt senzori si le scrie in fila
		file << sensors[i]->readSensor() << " ";
	}
	//trece la un nou rand, pt citiri ulterioare
	file << "\n";
	file.close();
}

void Living::readRoom(int number) {
	string path = "Living" + to_string(number) + ".txt";
	ifstream file;
	string room;
	double t, h, p;
	file.open(path);
	//afiseaza valorile din file, in consola, in format prestabilit de 12 unitati

	while (file >> room) {
		file >> t >> h >> p;
		cout << setw(12) << room << setw(12) << t << setw(12) << h << setw(12) << p << endl;
	}
}
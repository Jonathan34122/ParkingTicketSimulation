#ifndef PARKEDCAR_H
#define PARKEDCAR_H

#include <string>
using namespace std;

class ParkedCar{

private:

	string make;
	string model;
	string color;
	string licensceNumber;
	int minutesParked;

public:

	ParkedCar(string make, string model, string color, string license, int minutes);

};

#endif
#ifndef PARKEDCAR_H
#define PARKEDCAR_H

#include <string>
using namespace std;

class ParkedCar{

private:

	string make;
	string model;
	string color;
	string licenseNumber;
	int minutesParked;

public:

	ParkedCar(string make, string model, string color, string license, int minutes);
	
	// Initialize Getters

	string getMake() const;
	string getModel() const;
	string getColor() const;
	string getLicense() const;
	int getMinutes() const;

};

#endif
#include "ParkedCar.h"


ParkedCar::ParkedCar(string make, string model, string color, string licenseNumber, int minutesParked) {
	this->make = make;
	this->model = model;
	this->color = color;
	this->licenseNumber = licenseNumber;
	this->minutesParked = minutesParked;
}

// Initialize Getters

string ParkedCar::getMake() const {
	return make;
}
string ParkedCar::getModel() const {
	return model;
}
string ParkedCar::getColor() const {
	return color;
}
string ParkedCar::getLicense() const {
	return licenseNumber;
}
int ParkedCar::getMinutes() const {
	return minutesParked;
}
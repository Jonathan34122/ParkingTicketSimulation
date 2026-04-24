#include "ParkingTicket.h"
#include <iostream> //cout
#include <cmath> // for ceiling function

using namespace std;

ParkingTicket::ParkingTicket(const ParkedCar& c1, int minutesOver, string officerName, string badgeNumber) : car(c1) {

	this->minutesOver = minutesOver;
	this->officerName = officerName;
	this->badgeNumber = badgeNumber;
	this->fine = 0.0;
	calculateFine();

}

void ParkingTicket::calculateFine() {
	int hours = ceil(minutesOver / 60.0); // ceiling to promote hour to a whole number

	fine = 25.0;

	if (hours > 1) {
		fine += (hours - 1) * 10.0; // additional fines after 1 hour.
	}

}

double ParkingTicket::getFine() const {
	return fine;
}

void ParkingTicket::printTicket() {

	cout << "-----Parking Fine-------\n";
	cout << "Vehicle: " << car.getMake() << " " << car.getModel() << " " << car.getColor() << endl;
	cout << "License: " << car.getLicense() << endl;
	cout << "Minutes Parked: " << car.getMinutes() << endl;
	cout << "Minutes Over: " << minutesOver << endl;
	cout << "Amount to be Paid: $" << fine << endl;
	cout << "\nOfficer: " << officerName << "\nbadge#" << badgeNumber << endl;

}
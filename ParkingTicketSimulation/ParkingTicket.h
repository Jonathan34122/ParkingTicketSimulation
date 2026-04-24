#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H

#include <string>
#include "ParkedCar.h"

using namespace std;

class ParkingTicket{

private:

	ParkedCar car; // Composition
	int minutesOver;
	double fine;
	string officerName;
	string badgeNumber;

	void calculateFine();

public:

	ParkingTicket(const ParkedCar& c1, int minutesOver, string officerName, string badgeNumber);

	double getFine() const;
	void printTicket();

};

#endif
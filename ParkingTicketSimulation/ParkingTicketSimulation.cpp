// Purpose: Use of Aggregation, use multiple classes that interact with eachother.
// Author: Jonathan L.

#include <iostream>
#include "PoliceOfficer.h"

using namespace std;

int main(){

	PoliceOfficer PoliceMan("Marcus Brown", "4291");

	ParkedCar car1("BMW", "M2", "White", "OVQ-1492", 390);
	ParkingMeter meter1(120); // !payed below spent time!

	ParkingTicket* ticket1 = PoliceMan.inspectCar(car1, meter1);


	if (ticket1) {
		ticket1->printTicket();
		delete ticket1;
	}












}
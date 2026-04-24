// Purpose: Use of Aggregation, use multiple classes that interact with eachother.
// Author: Jonathan L.

#include <iostream>
#include "PoliceOfficer.h"

using namespace std;

int main(){

	ParkedCar car1("BMW", "M2", "White", "OVQ-1492", 390);
	ParkingMeter meter1(120); // !payed below spent time!

	ParkingTicket* ticket1 = PoliceOfficer.inspectCar(car1, meter1);















}
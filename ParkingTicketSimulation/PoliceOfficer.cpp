#include "PoliceOfficer.h"

PoliceOfficer::PoliceOfficer(string name, string badgeNumber) {
	this->name = name;
	this->badgeNumber = badgeNumber;
}

ParkingTicket* PoliceOfficer::inspectCar(const ParkedCar& car, const ParkingMeter& meter) const { // Aggregation

	int minutesOver = car.getMinutes() - meter.getMinutesPurchased();

	if (minutesOver > 0) {

		return new ParkingTicket(car, minutesOver, name, badgeNumber);


	}

	return nullptr;

}
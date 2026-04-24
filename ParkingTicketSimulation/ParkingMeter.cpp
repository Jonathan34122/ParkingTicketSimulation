#include "ParkingMeter.h"

using namespace std;

ParkingMeter::ParkingMeter(int minutes) { // enter in minutes to purchase for parking

	minutesPurchased = minutes;

}

int ParkingMeter::getMinutesPurchased() const {
	return minutesPurchased;
}
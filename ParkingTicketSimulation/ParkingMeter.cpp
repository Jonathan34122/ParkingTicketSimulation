#include "ParkingMeter.h"

using namespace std;

ParkingMeter::ParkingMeter(int minutes) {

	minutesPurchased = minutes;

}

int ParkingMeter::getMinutesPurchased() const {
	return minutesPurchased;
}
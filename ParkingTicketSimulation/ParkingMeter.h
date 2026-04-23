#ifndef PARKINGMETER_H
#define PARKINGMETER_H

using namespace std;

class ParkingMeter{

private:

	int minutesPurchased;




public:

	ParkingMeter(int minutes); // Constructor

	int getMinutesPurchased() const;

};

#endif 
#pragma once
#include "Dog.h"


class DogWithSpots : public Dog {
private:
	int nr_spots;
public:
	DogWithSpots();

	 void ReadingData();
	 void DataDisplay();
	int NrSpots();
	void SetNrSpots(int nr_pete);


};
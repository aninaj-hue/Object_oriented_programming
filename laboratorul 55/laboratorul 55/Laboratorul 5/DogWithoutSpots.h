#pragma once

#include "Dog.h"


class DogWithoutSpots : public Dog {
public:
	DogWithoutSpots()
	{
		//cout << "Constructorul clasei CaineFaraPete." << endl;
	}
	void ReadingData();
	void DataDisplay();
};



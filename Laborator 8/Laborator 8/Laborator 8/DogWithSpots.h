#pragma once
#include "Dog.h"

#ifndef _DOGWITHSPOTS_
#define _DOGWITHSPOTS_

class DogWithSpots : public Dog {
private:
	int nrSpots;
public:
	DogWithSpots();
	virtual~DogWithSpots()
	{
		cout << "Destructor DogWithSpots" << endl;
	}
	void ReadingData();
	void DataDisplay();
	int NrSpots();
	void SetNrSpots(int nr_pete);


};
#endif

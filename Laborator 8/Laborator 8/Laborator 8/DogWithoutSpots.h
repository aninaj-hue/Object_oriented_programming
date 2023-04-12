#pragma once
#include "Dog.h"

#ifndef _DOGWITHOUTSPOTS_
#define _DOGWITHOUTSPOTS_



class DogWithoutSpots : public Dog {
public:
	DogWithoutSpots()
	{
		cout << "Constructor  DogWithoutSpots." << endl;
	}
	virtual~DogWithoutSpots()
	{
		cout << "Destructor DogWithoutSpots" << endl;
	}
	void ReadingData();
	void DataDisplay();


};
#endif
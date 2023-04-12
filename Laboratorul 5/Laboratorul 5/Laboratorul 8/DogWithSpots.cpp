
#include "Dog.h"
#include "DogWithSpots.h"

DogWithSpots::DogWithSpots()
{
	this->nr_spots = 0;
}
void DogWithSpots::ReadingData()
{


	Dog::ReadingData();

	cout << "'The number of spots: " << endl;
	cin >> this->nr_spots;

}

int DogWithSpots::NrSpots()
{
	return this->nr_spots;
}
void DogWithSpots::SetNrSpots(int nr_pete)
{
	this->nr_spots = nr_pete;
}

void DogWithSpots::DataDisplay()
{
	Dog::DataDisplay();
	cout << "The number of spots the dog has is: " << this->nr_spots << endl;
}
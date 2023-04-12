#include "DogWithSpots.h"

#include "Dog.h"


DogWithSpots::DogWithSpots()
{
	this->nrSpots = 0;
}
void DogWithSpots::ReadingData()
{


	cout << "Name: " << endl;
	cin >> this->name;
	cout << "Color:" << endl;
	cin >> this->color;
	cout << "Height:" << endl;
	cin >> this->height;
	cout << "Weight: " << endl;
	cin >> this->weight;
	cout << "Age: " << endl;
	cin >> this->age;

	cout << "Number of spots: " << endl;
	cin >> this->nrSpots;

}

int DogWithSpots::NrSpots()
{
	return this->nrSpots;
}
void DogWithSpots::SetNrSpots(int nr_pete)
{
	this->nrSpots = nr_pete;
}

void DogWithSpots::DataDisplay()
{
	cout << "The breed of the dog is " << this->name << endl;
	cout << "The color of the dog is: " << this->color << endl;
	cout << "The height of the dog is: " << this->height << endl;
	cout << "The weight of the dog is: " << this->weight << endl;
	cout << "The age of the dog is: " << this->age << endl;
	cout << "The number of spots the dog has is: " << this->nrSpots << endl;
}

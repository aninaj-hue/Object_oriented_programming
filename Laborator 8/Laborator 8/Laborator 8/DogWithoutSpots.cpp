#include "Dog.h"
#include "DogWithoutSpots.h"


void DogWithoutSpots::ReadingData()
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
}
void DogWithoutSpots::DataDisplay()
{
	cout << "The breed of the dog is " << this->name << endl;
	cout << "The color of the dog is: " << this->color << endl;
	cout << "The height of the dog is: " << this->height << endl;
	cout << "The weight of the dog is: " << this->weight << endl;
	cout << "The age of the dog is: " << this->age << endl;
}

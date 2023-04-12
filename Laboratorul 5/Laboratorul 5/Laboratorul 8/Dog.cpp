
#include "Dog.h"

Dog::Dog()
{
	this->name = " ";
	this->color = " ";
	this->height = 0;
	this->weight = 0;
	this->age = 0;
}

void Dog::ReadingData()
{
	cout << "Name: " << endl;
	cin >> this->name;
	cout << "Color:" << endl;
	cin >> this->color;
	cout << "'Height:" << endl;
	cin >> this->height;
	cout << "Weight: " << endl;
	cin >> this->weight;
	cout << "Age: " << endl;
	cin >> this->age;
}


string Dog::Name() {
	return this->name;
}
void Dog::SetName(string name)
{
	this->name = name;
}
string Dog::Color()
{
	return this->color;
}
void Dog::SetColor(string color)
{
	this->color = color;
}
int Dog::Height()
{
	return this->height;
}
void Dog::SetHeight(int height)
{
	this->height = height;
}
int Dog::Weight()
{
	return this->weight;
}
void Dog::SetWeight(int weight)
{
	this->weight = weight;
}
int Dog::Age()
{
	return this->age;
}
void Dog::SetAge(int age)
{
	this->age = age;
}

void Dog::DataDisplay()
{
	cout << "The breed of the dog is: " << this->name << endl;
	cout << "The color of the dog is: " << this->color << endl;
	cout << "The height of the dog is: " << this->height << endl;
	cout << "The weight of the dog is: " << this->weight << endl;
	cout << "The age of the dog is: " << this->age << endl;
}
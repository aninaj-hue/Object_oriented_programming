#include "Dog.h"

Dog::Dog()
{
	this->name = " ";
	this->color = " ";
	this->height = 0;
	this->weight = 0;
	this->age = 0;
}


string Dog::Name() {
	return this->name;
}
void Dog::SetName(string nume)
{
	this->name = nume;
}
string Dog::Color()
{
	return this->color;
}
void Dog::SetColor(string culoare)
{
	this->color = culoare;
}
int Dog::Height()
{
	return this->height;
}
void Dog::SetHeight(int inaltime)
{
	this->height = inaltime;
}
int Dog::Weight()
{
	return this->weight;
}
void Dog::SetWeight(int greutate)
{
	this->weight = greutate;
}
int Dog::Age()
{
	return this->age;
}
void Dog::SetAge(int varsta)
{
	this->age = varsta;
}


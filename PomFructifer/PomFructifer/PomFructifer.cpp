#include <iostream>
#include "PomFructifer.h"
using namespace std;

Pom::Pom()
{
//constructor implicit
}

Pom::~Pom()
{
	//desctructor
}
Pom::Pom(string specie, string perioada, int kg)
{
	this->specie = specie;
	this->perioada = perioada;
	this->kg = kg;
}

Pom::Pom(Pom& p)
{
	this->specie =p.specie;
	this->perioada =p.perioada;
	this->kg =p.kg;

}

istream& operator>>(istream& is, Pom& pom)
{
	is >> pom.specie >> pom.perioada >> pom.kg;
	return is;

}

ostream& operator<<(ostream& os, Pom& pom)
{

	os <<"Specie pom:"<< pom.specie << endl;
	os << "Perioada de culegere: "<<pom.perioada << endl;
	os<<"Kg culese: "<<pom.kg << endl;
	return os;

}

bool Pom:: operator==(Pom& pom)
{ if(this->specie==pom.specie)
{
	return true;
}
else
{
	return false;
}
}

Pom& Pom:: operator=(const Pom& pom)
{

	this->specie = pom.specie;
	return *this;
}

string Pom::getName()
{
	return this->specie;
}
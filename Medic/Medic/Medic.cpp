#include<iostream>
#include "Medic.h"
using namespace std;

Medic::Medic(string nume, string specializare, int nrGarzi)
{
	this->nume = nume;
	this->specializare = specializare;
	this->nrGarzi = nrGarzi;
}

istream& operator>>(istream& is, Medic& medic)
{
	is >> medic.nume >> medic.specializare >> medic.nrGarzi;
	return is;
}
ostream& operator<<(ostream& os, Medic& medic)
{
	os << "Nume medic: " << medic.nume << endl;
	os << "Specializare medic: " << medic.specializare << endl;
	os << "Numar garzi efectuate de medic: " << medic.nrGarzi << endl;
	return os;
}

bool Medic:: operator<(Medic& medic)
{
	if(this->nrGarzi<medic.nrGarzi)
	{
		return true;
	}
	else
	{
		return false;
	}
}
Medic::Medic()
{
	//constructor implicit
}

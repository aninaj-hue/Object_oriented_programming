#include<iostream>
#include "Depozit.h"
using namespace std;

Depozit::Depozit(string nume, int valoare, int dobanda, string tip)
{
	this->nume = nume;
	this->valoare = valoare;
	this->dobanda = dobanda;
	this->tip = tip;
}
Depozit::Depozit()
{
	this->nume = "";
	this->valoare = 0;
	this->dobanda = 0;
	this->tip = "";

}

Depozit::~Depozit()
{
	//destructor
}

istream& operator>>(istream& is, Depozit& depozit)
{
	is >> depozit.nume >> depozit.valoare >> depozit.dobanda >> depozit.tip;
	return is;
}

ostream& operator<<(ostream& os, Depozit& depozit)
{
	os << "Nume: " << depozit.nume << endl;
	os << "Valoare: " << depozit.valoare << endl;
	os << "Dobanda: " << depozit.dobanda << endl;
	os << "Tip: " << depozit.tip << endl;
	return os;

}
Depozit& Depozit:: operator + (const Depozit& depozit)
{

		this->tip = this->tip + depozit.tip;
		return *this;
}

int Depozit:: getValoare()
{
	return valoare;
}

Depozit& Depozit:: operator=(Depozit& depozit)
{
	tip = depozit.tip;
	nume = depozit.nume;
	return *this;
}
bool Depozit:: operator==(Depozit& depozit)
{
	if (this->nume == depozit.nume)
	{
		return true;
	}
	else
	{
		return false;
	}
}
Depozit::Depozit(const double valoare)
{
	this->valoare = (int)valoare;
}
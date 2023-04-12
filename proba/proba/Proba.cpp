#include<iostream>
#include "Proba.h"
using namespace std;

Proba::Proba()
{
	this->nume ="";
	this->loc = "";
	this->tip = "";
	this->barem = 0;

}

Proba::Proba(string nume, string loc, string tip, int barem)
{
	this->nume = nume;
	this->loc = loc;
	this->tip = tip;
	this->barem = barem;
}

Proba::Proba(Proba& p)
{
	this->nume = p.nume;
	this->loc = p.loc;
	this->tip = p.tip;
	this->barem = p.barem;
}

Proba::~Proba()
{
	//destructor
}

istream& operator>>(istream& is, Proba& proba)
{
	is >> proba.nume >> proba.loc >> proba.tip >> proba.barem;
	return is;
}

ostream& operator<<(ostream& os, Proba& proba)
{
	os << "Nume proba: " << proba.nume << endl;
	os << "Loc desfasurare: " << proba.loc << endl;
	os << "Tip proba: " << proba.tip << endl;
	os << "Barem: " << proba.barem << endl;
	return os;
}

bool Proba::operator!=(const Proba& proba)
{
	if(this->tip != proba.tip)
	{
		return true;
	}
	else
	{
		return false;
	}
}


Proba& Proba:: operator=(Proba& proba)
{
	this->tip = proba.tip;
	return *this;
}
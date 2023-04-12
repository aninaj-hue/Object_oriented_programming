#include<iostream>
#include "concurs.h"
using namespace std;

Concurs::Concurs(string nume, string loc, int editia, int premiul)
{
	this->nume = nume;
	this->loc = loc;
	this->editia = editia;
	this->premiul = premiul;
}

Concurs::Concurs(Concurs& concurs)
{
	this->nume = concurs.nume;
	this->loc = concurs.loc;
	this->editia = concurs.editia;
	this->premiul = concurs.premiul;
}

Concurs::~Concurs()
{
	//destructor
}

istream& operator >> (istream& is, Concurs& concurs)
{
	is >> concurs.nume >> concurs.loc >> concurs.editia >> concurs.premiul;
	return is;

}
ostream& operator<<(ostream& os, Concurs& concurs)
{
	os << "Numele concursului: " << concurs.nume << endl;
	os << "Locul concursului: " << concurs.loc << endl;
	os << "Editia concursului: " << concurs.editia << endl;
	os << "Premiul: " << concurs.premiul << endl;
	return os;
}
bool Concurs:: operator>(Concurs& concurs)
{
	if (this->premiul > concurs.premiul)
	{
		return true;
	}
	else
	{
		return false;
	}

}
Concurs::Concurs()
{
	//constructor implicit
}

Concurs& Concurs::operator=(Concurs& c)
{
	this->premiul = c.premiul;
	return *this;
}
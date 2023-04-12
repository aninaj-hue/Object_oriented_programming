#include <iostream>
#include "Secretar.h"
using namespace std;


Secretar::Secretar() 
{
	//constructor implicit
}

Secretar::Secretar(char nume, char institutie, int vechime, int clase)//constructor general
{
	this->nume = nume;
	this->institutie = institutie;
	this->vechime = vechime;
	this->clase = clase;
}


Secretar::Secretar(Secretar& s)//constructor de copiere
{
	this->nume = s.nume;
	this->institutie = s.institutie;
	this->vechime = s.vechime;
	this->clase = s.clase;
}

istream& operator>>(istream& is, Secretar& secretar)
{
	cout << "Introduceti nume secretar: ";
	is >> secretar.nume;
	cout << endl;
	cout << "Introduceti nume institutie: ";
	is >> secretar.institutie;
	cout << endl;
	cout << "Introduceti vechime secretar: ";
	is >> secretar.vechime;
	cout << endl;
	cout << "Introduceti clase deservite: ";
	is>> secretar.clase;
	cout << endl;
	return is;
}

ostream& operator<<(ostream& os, Secretar& secretar)
{
	os << "Nume secretar: " << secretar.nume << endl;
	os << "Nume institutie: " << secretar.institutie << endl;
	os << "Vechime: " << secretar.vechime << endl;
	os <<"Clase: "<< secretar.clase << endl;
	return os;
}

bool Secretar:: operator>(const Secretar& secretar)
{
	if(this->clase>secretar.clase)
	{
		return true;
	}
	else
	{
		return false;
	}
}


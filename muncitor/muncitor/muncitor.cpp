#include<iostream>
#include "muncitor.h"
using namespace std;



muncitor:: muncitor(string nume, string ocupatie, int vechime, int salariu)
{
	this->nume = nume;
	this->ocupatie = ocupatie;
	this->vechime = vechime;
	this->salariu = salariu;
}

muncitor::muncitor(const double vechime)//conversie
{
	this->vechime = (int)vechime;

	
}
muncitor::muncitor()
{
	//implicit
}

istream& operator>>(istream& is, muncitor& m)
{
	is >> m.nume >> m.ocupatie >> m.vechime >> m.salariu;
	return is;
}

ostream& operator<<(ostream& os, muncitor& m)
{
	os << "Nume muncitor: " << m.nume << endl;
	os << "Ocupatie:  " << m.ocupatie << endl;
	os << "Vechime: " << m.vechime << endl;
	os << "Salariu: " << m.salariu << endl;
	return os;
}

muncitor& muncitor::operator=( muncitor& m)
{
	
	this->salariu = m.salariu;
	return *this;
}
bool muncitor::operator!=(const muncitor& m)
{
	if (this->salariu != m.salariu)
	{
		return true;
	}
	else
	{
		return false;
	}

}
int muncitor:: getVechime()
{
	return vechime;
 }
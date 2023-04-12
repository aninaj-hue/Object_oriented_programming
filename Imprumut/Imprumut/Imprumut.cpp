#include<iostream>
#include "Imprumut.h"
using namespace std;

Imprumut::Imprumut()
{
	//constructor implicit
}

Imprumut::Imprumut(string scop, int valoare, string perioada)
{
	this->scop = scop;
	this->valoare = valoare;
	this->perioada = perioada;
}

Imprumut& Imprumut:: operator=(const Imprumut& imprumut)
{
	this->scop = imprumut.scop;
	this->valoare = imprumut.valoare;
	this->perioada = imprumut.perioada;
	return *this;

}
Imprumut& Imprumut:: operator+(const Imprumut& imprumut)
{
	this->scop = this->scop + imprumut.scop;
	this->valoare = this->valoare + imprumut.valoare;
	this->perioada = this->perioada + imprumut.perioada;
	return *this;
}

istream& operator>>(istream& is, Imprumut& imprumut)
{
	is >> imprumut.scop >> imprumut.valoare >> imprumut.perioada;
	return is;
}

ostream& operator<<(ostream& os, Imprumut& imprumut)
{
	os << "Scopul imprumutului este " << imprumut.scop << endl;
	os << "Valoare imprumutului este " << imprumut.valoare << endl;
	os << "Peroada imprumutului este luna " << imprumut.perioada << endl;
	return os;
}
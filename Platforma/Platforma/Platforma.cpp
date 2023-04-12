#include< iostream>
#include "Platforma.h"
using namespace std;

Platforma::Platforma()
{
	//constructor implicit
}

Platforma::Platforma(Platforma& platforma)
{//constructor de copiere
	this->nume = platforma.nume;
	this->utilizatori = platforma.utilizatori;
	this->lista = platforma.lista;
}

Platforma::Platforma(string nume, int utilizatori, string lista)
{
	//constructor general
	this->nume = nume;
	this->utilizatori = utilizatori;
	this->lista = lista;
}

Platforma::~Platforma()
{
	//destructor
}

istream& operator>>(istream& is, Platforma& platforma)
{
	is >> platforma.nume >> platforma.utilizatori >> platforma.lista;
	return is;
}

ostream& operator<<(ostream& os, Platforma& platforma)
{
	os << "Nume: "<<platforma.nume << endl;
	os << "Nr utilizatori:" << platforma.utilizatori << endl;
	os << "Lista: " << platforma.lista << endl;
	return os;

}

Platforma& Platforma::operator=(const Platforma& platforma)
{
	this->utilizatori = 2 * platforma.utilizatori;
	return *this;
}
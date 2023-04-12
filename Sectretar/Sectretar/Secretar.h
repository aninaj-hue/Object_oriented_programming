#pragma once
#include <iostream>
using namespace std;

class Secretar
{
public:
	Secretar();
	Secretar(char nume, char institutie, int vechime, int clase);//constructor general
	Secretar( Secretar& s);// constructor de copiere
	friend istream& operator>>(istream& is, Secretar& secretar);//insertie din stream
	friend ostream& operator<<(ostream& os, Secretar& secretar);//extractie din stream
	bool operator>(const Secretar& secretar);

	
private:
	char nume;
	char institutie;
	int vechime;
	int clase;
};

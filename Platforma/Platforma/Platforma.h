#pragma once
#include<iostream>
using namespace std;

class Platforma
{
public:
	Platforma();//constructor implicit
	Platforma(string nume, int utilizatori, string lista);//constructor general
	Platforma(Platforma& platforma);//constructor de copiere
	~Platforma();//destructor

	friend istream& operator>>(istream& is, Platforma& platforma);
	friend ostream& operator<<(ostream& os, Platforma& platforma);
	Platforma& operator=(const Platforma& platforma);
	string getName()
	{
		return this->nume;
	}
private:
	string nume;
	int utilizatori;
	string lista;

};

#pragma once
#include<iostream>
using namespace std;

class Depozit
{
public:
	Depozit();
	Depozit(string nume, int valoare, int dobanda, string tip);
	~Depozit();
	friend istream& operator>>(istream& is, Depozit& depozit);
	friend ostream& operator<<(ostream& os, Depozit& depozit);
	Depozit& operator + ( const Depozit & depozit);
	Depozit(const double valoare);
	bool operator==(Depozit& depozit);
	Depozit& operator=(Depozit& depozit);
	int getValoare();
private:
	string nume;
	int valoare;
	int dobanda;
	string tip;
};
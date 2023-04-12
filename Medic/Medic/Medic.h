#pragma once
#include<iostream>
using namespace std;

class Medic
{
public:
	Medic(string nume, string specializare, int nrGarzi);//constructor general
	Medic();
	bool operator<(Medic& medic);//operator
	friend istream& operator>>(istream& is, Medic& medic);//istream
	friend ostream& operator<<(ostream& os, Medic& medic);//ostream
	
private:
	string nume;
	string specializare;
	int nrGarzi;

};
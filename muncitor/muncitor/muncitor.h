#pragma once
#include<iostream>
using namespace std;

class muncitor
{
public:
	muncitor();//const implicit
	muncitor(string nume, string ocupatie, int vechime, int salariu);//const general
	muncitor( const double vechime);//const conversie
	friend istream& operator>>(istream& is, muncitor& m);
	friend ostream& operator<<(ostream& os, muncitor& m);
	bool operator!=(const muncitor& m);//operator
	muncitor& operator=(muncitor& m);
	int getVechime();

private:
	string nume;
	string ocupatie;
	int vechime;
	int salariu;
};
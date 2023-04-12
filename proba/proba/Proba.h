#pragma once
#include <iostream>
using namespace std;

class Proba
{
public:
	Proba();//constructor implicit
	Proba(string nume, string loc, string tip, int barem);//constructor general
	Proba(Proba& p);//constructor de copiere
	~Proba();//desctructor

	bool operator!=(const Proba& proba);
	friend istream& operator>>(istream& is, Proba& proba);
	friend ostream& operator<<(ostream& os, Proba& proba);
	Proba& operator=(Proba& proba);

protected:
	string nume;
	string loc;
	string tip;
	int barem;

};

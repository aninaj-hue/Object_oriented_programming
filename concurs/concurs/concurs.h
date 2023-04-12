#pragma once
#include<iostream>
using namespace std;

class Concurs
{
public:
	Concurs(string nume, string loc, int editia, int premiul);
	Concurs(Concurs& concurs);
	~Concurs();
	Concurs();
	friend istream& operator>>(istream& is, Concurs& concurs);
	friend ostream& operator<<(ostream& os, Concurs& concurs);
	bool operator>(Concurs& concurs);
	Concurs& operator=(Concurs& c);
private:
	string nume;
	string loc;
	int editia;
	int premiul;
 };
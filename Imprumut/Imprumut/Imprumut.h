#pragma once
#include<iostream>
using namespace std;

class Imprumut
{
public:
	Imprumut();
	Imprumut(string scop, int valoare, string perioada);
	Imprumut& operator=(const Imprumut& imprumut);
	Imprumut& operator+(const Imprumut& imprumut);
	friend istream& operator>>(istream& is, Imprumut& imprumut);
	friend ostream& operator<<(ostream& os, Imprumut& imprumut);

private:
	string scop;
	int valoare;
	string perioada;
};
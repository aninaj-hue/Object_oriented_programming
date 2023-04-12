#pragma once
#include<iostream>
using namespace std;

class Pom
{
public:
	Pom();//constructor implicit
	Pom(string specie, string perioada, int kg);//constructor general
	Pom(Pom& p);//constructor de copiere
	~Pom();//destructor
	friend istream& operator>>(istream& is, Pom& pom);
	friend ostream& operator<<(ostream& os, Pom& pom);
	bool operator==(Pom& pom);
	string getName();
	Pom& operator=(const Pom& pom);

private:
	string specie;
	string perioada;
	int kg;




};

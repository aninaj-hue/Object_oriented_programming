#pragma once
#include <iostream>
#include <string>
#include "conio.h"
#include <vector>
#include "Carte.h"
#include "ISBN.h"

using namespace std;

class CBiblioteca {
public:


	CBiblioteca()//implicit constructor
	{
		this->size = 0;
	}


	~CBiblioteca()//destructor
	{
		//cout << "S-a apelat destructorul!" << endl;
	}
	void citireCarte();
	void afisareCarti();
	//void afisareDupaNume(string nume);
	bool cautare_titlu(string titlu_carte);
	bool cautare_editura(string editura_carte);
	bool cautare_ISBN(string ISBN_carte);
	bool comparare_ISBN(string ISBN_carte, string ISBN);

private:
	int size;
	Carte Carti[50];
	//CISBN nr[50];

};

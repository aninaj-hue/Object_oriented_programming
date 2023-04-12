#pragma once
#include <iostream>
#include <string>
#include "conio.h"
#include <vector>
#include "Carte.h"

using namespace std;

class CBiblioteca {
public:


	CBiblioteca()// implicit constructor
	{
		this->size = 0;
	}


	~CBiblioteca()//destructor 
	{
		//cout << "S-a apelat destructorul!" << endl;
	}
	void citireCarte();//method of reading data about the book
	void afisareCarti();//methoda of displaying data about the book
	//void afisareDupaNume(string nume);
	bool cautare_titlu(string titlu_carte);// search method by title
	bool cautare_editura(string editura_carte);//search method by publisher
	bool cautare_ISBN(string ISBN_carte);//search method by ISBN
private:
	int size;
	Carte Carti[50];
};



#pragma once
#include "ISBN.h"
#include <string>
using namespace std;
class Carte
{
private:
	//data membru
	string title;

	//data membru
	string author;

	//data membru
	string publishing;

	//data membru
	int year_apearance;

	//data membru
	float price;

	CISBN mISBN;

public:

	Carte();//implicit constructor


	string Titlu();
	void SetTitlu(string titlu);//setter title

	string Autor();
	void SetAutor(string autor);//setter author

	string Editura();
	void SetEditura(string editura);//setter year of appearance

	int An_aparitie();
	void SetAn_aparitie(int an_aparitie);//setter year_apearance

	float Pret();
	void SetPret(float pret);//setter price

	CISBN GetISBN();
	void SetFISBN(string ISBN);//setter ISBN

	void afiseaza();

	void CitireDate();//data reading method

};


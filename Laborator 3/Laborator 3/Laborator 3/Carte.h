#pragma once
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
	string publishing_house;

	//data membru
	string ISBN;

	//data membru
	int year_appearance;

	//data membru
	float price;
public:

	Carte();//implicit constructor


	string Titlu();
	void SetTitlu(string titlu);//setter title

	string Autor();
	void SetAutor(string autor);//setter author

	string Editura();
	void SetEditura(string editura);//setter publishing house

	string FISBN();
	void SetFISBN(string ISBN);//setter ISBN

	int An_aparitie();
	void SetAn_aparitie(int an_aparitie);//setter year of appearance

	float Pret();
	void SetPret(float pret);//setter price

	void afiseaza();

	void CitireDate();//data reading method

};


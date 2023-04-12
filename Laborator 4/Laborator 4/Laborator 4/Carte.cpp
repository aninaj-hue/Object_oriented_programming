#include "Carte.h"
#include <iostream>
#include <string>

using namespace std;

Carte::Carte():title(""), author(""),publishing(""),year_apearance(0),price(0.0)
{
	/*this->title = " ";
	this->author = " ";
	this->publishing = " ";
	this->year_apearance = 0;
	this->price = 0.0;*/

	this->mISBN.SetFISBN(" ");

}

void Carte::CitireDate()
{
	string lISBN;
	cout << "Titlu: " << endl;
	cin >> this->title;
	cout << "Autor:" << endl;
	cin >> this->author;
	cout << "Editura:" << endl;
	cin >> this->publishing;
	cout << "ISBN: " << endl;
	cin >> lISBN;
	this->mISBN.SetFISBN(lISBN);
	cout << "Anul aparitiei: " << endl;
	cin >> this->year_apearance;
	cout << "Pret: " << endl;
	cin >> price;




}
void Carte::afiseaza()
{

	cout << "Titlul cartii este: " << this->title << endl;
	cout << "Autorul cartii este: " << this->author << endl;
	cout << "Editura cartii este: " << this->publishing << endl;
	cout << "ISBN cartii este: " << this->mISBN.FISBN() << endl;
	cout << "Anul aparitiei cartii este: " << this->year_apearance << endl;
	cout << "Pretul cartii este: " << this->price << endl;

}
string Carte::Titlu()
{
	return this->title;
}
void Carte::SetTitlu(string titlu)
{
	this->title = titlu;
}
string Carte::Autor()
{
	return this->author;
}
void Carte::SetAutor(string autor)
{
	this->author = autor;
}
string Carte::Editura()
{
	return this->publishing;
}
void Carte::SetEditura(string editura)
{
	this->publishing = editura;
}

int Carte::An_aparitie()
{
	return this->year_apearance;
}
void Carte::SetAn_aparitie(int an_aparitie)
{
	this->year_apearance = an_aparitie;
}
float Carte::Pret()
{
	return this->price;
}
void Carte::SetPret(float pret)
{
	this->price = pret;
}
CISBN Carte::GetISBN()
{
	return this->mISBN;
}
void Carte::SetFISBN(string pISBN)
{
	this->mISBN.SetFISBN(pISBN);
}
#include "Carte.h"
#include <iostream>
#include <string>

using namespace std;

Carte::Carte(): title(""), author(""), publishing_house(""), ISBN(""), year_appearance(0), price(0)
{   //Using initialization list
	/*this->titlu = " ";
	this->autor = " ";
	this->editura = " ";
	this->ISBN = " ";
	this->an_aparitie = 0;
	this->pret = 0.0;
	*/
}

void Carte::CitireDate()
{
	cout << "Titlu: " << endl;
	cin >> this->title;
	cout << "Autor:" << endl;
	cin >> this->author;
	cout << "Editura:" << endl;
	cin >> this->publishing_house;
	cout << "ISBN: " << endl;
	cin >> this->ISBN;
	cout << "Anul aparitiei: " << endl;
	cin >> this->year_appearance;
	cout << "Pret: " << endl;
	cin >> price;




}
void Carte::afiseaza()
{

	cout << "Titlul cartii este: " << this->title << endl;
	cout << "Autorul cartii este: " << this->author << endl;
	cout << "Editura cartii este: " << this->publishing_house << endl;
	cout << "ISBN cartii este: " << this->ISBN << endl;
	cout << "Anul aparitiei cartii este: " << this->year_appearance << endl;
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
	return this->publishing_house;
}
void Carte::SetEditura(string editura)
{
	this->publishing_house = editura;
}
string Carte::FISBN()
{
	return this->ISBN;
}
void Carte::SetFISBN(string ISBN)
{
	this->ISBN = ISBN;
}
int Carte::An_aparitie()
{
	return this->year_appearance;
}
void Carte::SetAn_aparitie(int an_aparitie)
{
	this->year_appearance = an_aparitie;
}
float Carte::Pret()
{
	return this->price;
}
void Carte::SetPret(float pret)
{
	this->price = pret;
}
#include "Biblioteca.h"
#include <string>


void CBiblioteca::citireCarte()
{
	string titlu;
	cout << "Titlul: " << endl;
	cin >> titlu;
	Carti[this->size].SetTitlu(titlu);

	string autor;
	cout << "Autor: " << endl;
	cin >> autor;
	Carti[this->size].SetAutor(autor);

	string editura;
	cout << "Editura: " << endl;
	cin >> editura;
	Carti[this->size].SetEditura(editura);

	string ISBN;
	cout << "ISBN: " << endl;
	cin >> ISBN;
	Carti[this->size].SetFISBN(ISBN);

	int an_aparitie;
	cout << "An publicare: " << endl;
	cin >> an_aparitie;
	Carti[this->size].SetAn_aparitie(an_aparitie);

	float pret;
	cout << "Pretul: " << endl;
	cin >> pret;
	Carti[this->size].SetPret(pret);




	size++;



}

bool CBiblioteca::cautare_titlu(string titlu_carte)
{

	for (int i = 0; i < this->size; i++)
	{
		if (titlu_carte.compare(Carti[i].Titlu()) == 0)
		{

			return true;//i
		}
	}

	return false;//-1

}
/*
void CBiblioteca::afisareDupaNume(string nume)
{
	int poz;

	poz = cautare_titlu(nume);
	if (-1 != poz)
	{
		Carti[poz].afiseaza();
	}

}*/
bool CBiblioteca::cautare_editura(string editura_carte)
{
	for (int i = 0; i < this->size; i++)
	{
		if (editura_carte.compare(Carti[i].Editura()) == 0)
		{

			return true;
		}
	}
	return false;
}//intoarcere carti
bool CBiblioteca::cautare_ISBN(string ISBN_carte)
{
	for (int i = 0; i < this->size; i++)
	{
		if (ISBN_carte.compare(Carti[i].FISBN()) == 0)
		{

			return true;
		}

	}
	return false;
}


void CBiblioteca::afisareCarti()
{

	for (int i = 0; i < this->size; i++)
	{
		cout << "Cartea de pe pozitia " << i+1 << " este :" << endl;
		Carti[i].afiseaza();
	}
}

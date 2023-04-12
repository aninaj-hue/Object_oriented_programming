#include "Biblioteca.h"
#include <string>


void CBiblioteca::citireCarte()
{

	bool ISBNunic = true;

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


	int an_aparitie;
	cout << "An publicare: " << endl;
	cin >> an_aparitie;
	Carti[this->size].SetAn_aparitie(an_aparitie);

	float pret;
	cout << "Pretul: " << endl;
	cin >> pret;
	Carti[this->size].SetPret(pret);

	string ISBN;
	cout << "ISBN: " << endl;
	cin >> ISBN;





	for (int i = 0; i < this->size; i++)
	{
		if (this->Carti[i].GetISBN().FISBN().compare(ISBN) == 0)
		{
			ISBNunic = false;
		}
	}

	if (ISBNunic)
	{
		Carti[this->size].SetFISBN(ISBN);
		size++;
	}
	else
	{
		cout << "ISBN nu e unic " << endl;
	}





}
void CBiblioteca::afisareCarti()
{

	for (int i = 0; i < this->size; i++)
	{
		cout << "Cartea de pe pozitia " << i+1 << " este :" << endl;
		Carti[i].afiseaza();
	}
}

bool CBiblioteca::cautare_titlu(string titlu_carte)//int
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
		if (ISBN_carte.compare(Carti[i].GetISBN().FISBN()) == 0)
		{

			return true;
		}

	}
	return false;
}


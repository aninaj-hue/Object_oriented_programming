#include "Biblioteca.h"


int main()
{
	CBiblioteca Bibl;// instantierea unui obiect- Bibl- din clasa CBiblioteca
	string titlu_carte;
	string editura_carte;
	string ISBN_carte;

	char optiune = 125;
	do
	{
		cout << "1. Introduceti date carti." << endl;
		cout << "2. Cautare carti dupa titlu." << endl;
		cout << "3. Cautare carti dupa editura." << endl;
		cout << "4. Cautare carti dupa ISBN." << endl;
		cout << "5. Afisare carti." << endl;
		cout << "0. Exit" << endl;
		cin >> optiune;

		switch (optiune)
		{
		case '1':
			cout << "Adauga carte: " << endl;
			Bibl.citireCarte();// apelul metodei citireCarte()

			break;

		case '2':
			cout << "Introduceti titlul cautat: " << endl;
			cin >> titlu_carte;
			// cin.get();

			if ((Bibl.cautare_titlu(titlu_carte)) == true)/*-1=*/ //apelul metodei cautare_titlu() in interiorul
													             //instructiunii if care verifica daca cartea se afla
													            //sau nu in biblioteca
			{
				cout << "DA, cartea se afla in biblioteca" << endl;
			}
			else
			{
				cout << "NU, cartea nu se afla in biblioteca" << endl;
			}
		default:
			break;
		case '3':
			cout << "Introduceti editura cautata: " << endl;
			cin >> editura_carte;
			// cin.get();
			if (Bibl.cautare_editura(editura_carte) == true) // apelul metodei cautare_editura() in interiorul
															//instructiunii if care verifica daca cartea se afla
															//sau nu in biblioteca
			{
				cout << "DA, cartea se afla in biblioteca" << endl;
			}
			else
			{
				cout << "NU, cartea nu se afla in biblioteca" << endl;
			}

			break;
		case '4':
			cout << "Introduceti ISBN cautat: " << endl;
			cin >> ISBN_carte;
			//cin.get();
			if (Bibl.cautare_ISBN(ISBN_carte) == true)//apelul metodei cautare_ISBN() in interiorul
													 //instructiunii if care verifica daca cartea se afla
													//sau nu in biblioteca
			{

				cout << "DA, cartea se afla in biblioteca" << endl;
			}
			else
			{
				cout << "NU, cartea nu se afla in biblioteca" << endl;
			}
			break;
		case'5':
			cout << "Afisare carti: " << endl;
			Bibl.afisareCarti();// apeulul metodei afisareCarti()
			break;
		case'0':
			return 0;
		}
	} while (optiune != '0');

	return 0;
}
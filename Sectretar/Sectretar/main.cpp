#include <iostream>
#include "Secretar.h"
using namespace std;

int main()
{
	int nr;
	cout << "Introduceti un numar: " << endl;
	cin >> nr;
	Secretar* secretari = new Secretar[nr];
	Secretar aux;
	for (int i = 0; i < nr; i++)
	{
		cin >> secretari[i];
	}

	for(int i=0;i<nr-1;i++)
	{
		for (int j = i;j<nr;j++)
		{if(secretari[i]>secretari[j])
		
	{
			aux = secretari[i];
			secretari[i] = secretari[j];
			secretari[j] = aux;
		}
		}
	}

	for(int i=0;i<nr;i++)
	{
		cout << secretari[i] << endl;
	}
	return 0;

}
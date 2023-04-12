#include<iostream>
#include "muncitor.h"
using namespace std;

int main()
{
	int n;
	cout << "Introduce numarul de muncitori: ";
	cin >> n;
	muncitor aux;
	muncitor* Muncitor = new muncitor[n];
	auto MMuncitor = new muncitor(4.6);
	cout << MMuncitor->getVechime();
	for(int i=0;i<n;i++)
	{
		cin >> Muncitor[i];
	}

	for (int i = 0; i < n - 1; i++)
	{
		int last = i + 1;
		for (int j = i + 1; j < n; j++)
		{
			if (Muncitor[i] != Muncitor[j])
			{
				aux = Muncitor[i];
				Muncitor[i] = Muncitor[j];
				Muncitor[j] = aux;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout << Muncitor[i];
	}

}
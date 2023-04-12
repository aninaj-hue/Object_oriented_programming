#include<iostream>
#include "Medic.h"
using namespace std;

int main()
{
	int n;
	Medic aux;
	cout << "Introduceti numarul de medici: ";
	cin >>  n;
	Medic* medici = new Medic[n];
	for(int i=0;i<n;i++)
	{
		cin >> medici[i];
	}

	for (int i = 0; i < n-1; i++)
	{
		//int last = i + 1;
		for (int j = i+1; j < n; j++)
		{
			if (medici[i] < medici[j])
			{
				continue;
			}
			{aux = medici[i];
				medici[i] = medici[j];
				medici[j] = aux;
				
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << medici[i];
	}
}
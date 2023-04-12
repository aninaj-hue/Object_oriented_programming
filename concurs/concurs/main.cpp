#include<iostream>
#include "concurs.h"
using namespace std;

int main()
{
	int n;
	cin >> n;
	Concurs* concurs = new Concurs[n+100];
	Concurs aux;
	for(int i=0;i<n;i++)
	{
		cin >> concurs[i];
	}
	for(int i=0;i<n-1;i++)
	{
		for (int j = i + 1; j < n; i++)
		{
			if (concurs[i] > concurs[j])
			{
				aux = concurs[i];
				concurs[i] = concurs[j];
				concurs[j] = aux;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << concurs[i];
	}
}
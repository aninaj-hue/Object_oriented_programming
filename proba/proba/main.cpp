#include <iostream>
#include "Proba.h"
using namespace std;

int main()
{
	int n;
	cin >> n;
	Proba aux;
	Proba* proba = new Proba[n];
	for(int i=0;i<n;i++)
	{
		cin >> proba[i];
	}

	for (int i = 0; i<n - 1; i++)
	{
		int last = i + 1;
		for (int j = i + 1; j < n; j++)
		{
			if (proba[i] != proba[j])
			{
				continue;
			}
			else

			{aux = proba[last];
				proba[last] = proba[j];
				proba[j] = aux;
				last++;
			}
		}
	}
	

	for(int i=0;i<n;i++)
	{
		cout << proba[i] << endl;
	}

	return 0;
}
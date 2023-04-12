#include<iostream>
#include "PomFructifer.h"
using namespace std;

int main()
{
	int n;
	cin >> n;
	Pom aux;
	Pom* pomFructifer = new Pom[n];
	for (int i = 0; i < n; i++)
	{
		cin >> pomFructifer[i];
	}
	

	for(int i=0;i<n-1;i++)
	{
		int last = i + 1;
		for (int j = i + 1; j < n; j++)
		{
			if (pomFructifer[i] == pomFructifer[j])
			{
				aux = pomFructifer[last];
				pomFructifer[last] = pomFructifer[j];
				pomFructifer[j] = aux;
				last = last + 1;
			}
			
		}
	}

	for(int i=0;i<n;i++)
	{
		cout << pomFructifer[i];
	}
	return 0;
}
#include<iostream>
#include "Imprumut.h"
using namespace std;

int main()
{
	int n;
	cin >> n;
	Imprumut* imprumut = new Imprumut[n];
	for(int i=0;i<n;i++)
	{
		cin >> imprumut[i];
	}
	for (int i = 0; i < n ; i++)
	{
		cout << imprumut[i];

	}
	for (int i = 0; i < n / 2; i++)
	{
		imprumut[i] = imprumut[i] + imprumut[n - i - 1];
	}

	for (int i = 0; i < n / 2; i++)
	{
		cout << imprumut[i];
	}
}
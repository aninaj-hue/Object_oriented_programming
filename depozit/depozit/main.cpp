#include<iostream>
#include"Depozit.h"
using namespace std;

int main()
{
	int n;
	cin >> n;
	Depozit* depo = new Depozit[n];
	auto depozit = new Depozit(9.5);
	cout << depozit->getValoare();
	for (int i = 0; i < n; i++)
	{
		cin >> depo[i];
	}

	for (int i = 0; i < n / 2; i++)
	{
		depo[i] = depo[i] + depo[n - i - 1];
	}


	for (int i = 0; i < n/2; i++)
	{
		cout << depo[i];
	}


}
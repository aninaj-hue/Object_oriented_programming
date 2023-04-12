#include<iostream>
#include"Platforma.h"
using namespace std;

int main()
{
	int n;
	cin >> n;
	Platforma* platforma = new Platforma[n];
	for(int i=0;i<n;i++)
	{
		cin >> platforma[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (platforma[i].getName() == "golf")
		{
			platforma[i] = platforma[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << platforma[i];
	}

	return 0;
}

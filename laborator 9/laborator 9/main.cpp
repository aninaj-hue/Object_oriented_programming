#include <iostream>
#include "template.h"

template <typename T>
void sort(T vector[], int n);

int main()
{
	int n, i, ch;
	int a[10];
	float b[10];
	char c[10];

	do
	{
		cout << "\n Selection sort using function template";
		cout << "\n 1. Sort Integer Numbers. ";
		cout << "\n 2. Sort Float Numbers. ";
		cout << "\n 3. Sort Strings. ";
		cout << "\n 4. Exit.";
		cout << "\n Enter your choice: ";
		cin >> ch;

		switch (ch)
		{
		case 1:
			cout << "\n Sorting Integer Numbers ";
			cout << "\n Enter how many numbers wanted to sort ";
			cin >> n;
			for (i = 0; i < n; i++)
				cin >> a[i];
			sort<int>(a, n);
			break;
		case 2:
			cout << "\n Sorting Floating point Numbers ";
			cout << "\n Enter how many numbers wanted to sort ";
			cin >> n;
			for (i = 0; i < n; i++)
				cin >> b[i];
			sort<float>(b, n);
			break;
		case 3:
			cout << "\n Sorting strings ";
			cout << "\n Enter how many strings wanted to sort ";
			cin >> n;
			for (i = 0; i < n; i++)
				cin >> c[i];
			sort<char>(c, n);
			break;
		case 4:
			exit(0);

		}
	} while (ch != 4);
	return 0;
}


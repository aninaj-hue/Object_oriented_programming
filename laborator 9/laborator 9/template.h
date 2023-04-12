
#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void sort(T vector[], int n)
{
	int i;
	T temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (vector[j] < vector[i])
			{
				
				temp = vector[i];
				vector[i] = vector[j];
				vector[j] = temp;
			}
		}
	}
	cout << "\n The sorted elements are: \n";
	for (i = 0; i < n; i++)
		cout << "\t" << vector[i];
}
/*template <class T>
void Sortare <char*> (char* vector[], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (strcmp(vector[i],vector[j])>0)
			{
				// interschimbare elemente
				char* temp = new char[strlen(vector[i]) + 1];
				strcpy(temp, vector[i]);
				delete[] vector[i];
				vector[i] = new char[strlen(vector[j]) + 1];
				strcpy(vector[i], vector[j]);
				delete[] vector[j];
				vector[j] = new char[strlen(temp) + 1];
				strcpy(vector[j], temp);
			}
}*/

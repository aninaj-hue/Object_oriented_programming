#include "word.h"
int main()
{
	Word newValue;
	Word dictionary[20];

	int nr;
	cout << "Enter the number of words you want: ";
	cin >> nr;

	for (int i = 0; i < nr; i++)
	{
		cout << " Word " << i + 1 << endl;
		dictionary[i].readData();
		dictionary[i].addSynonym();

	}
	for (int i = 0; i < nr; i++)
	{
		dictionary[i].dataDisplay();
	}
	return 0;
}
#include "Dog.h"
#include "DogWithSpots.h"
#include "DogWithoutSpots.h"

int main()
{
	//DogWithoutSpots x;
	//x.ReadingData();
	//DogWithSpots y;
	//y.DataDisplay();
	DogWithSpots dogspots;
	dogspots.SetNrSpots(12);

	Dog* Pup;
	Pup = new DogWithSpots();
	Dog* Puppy;
	Puppy = new DogWithoutSpots();
	char option;

	do
	{
		cout << "1. Enter data puppy with spots: " << endl;
		cout << "2. Show data puppy with spots: " << endl;
		cout << "3. Enter data puppy without spots: " << endl;
		cout << "4. Show data puppy without spots: " << endl;
		cout << "0. Exit" << endl;
		cin >> option;

		switch (option)
		{
		case '1':
			cout << "Enter data puppy with spots: " << endl;
			Pup->ReadingData();
			break;
		case '2':
			cout << "Show data puppy with spots: " << endl;
			Pup->DataDisplay();
			break;
		case '3':
			cout << "Enter data puppy without spots: " << endl;
			Puppy->ReadingData();
			break;
		case '4':
			cout << "Show data puppy without spots: " << endl;
			Puppy->DataDisplay();
			break;
			return 0;
		}
	} while (option != '0');
	delete Pup;
	delete Puppy;
	return 0;
}
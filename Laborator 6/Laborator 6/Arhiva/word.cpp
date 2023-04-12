#include "word.h"

Word::Word()
{
	word = " ";

}
void Word::addSynonym()
{
	string synonym;
	cin >> synonym;
	addSynonym(start, synonym);
}

void Word::dataDisplay()
{
	cout << " The word entered is: " << word << endl;
	cout << " The introduced synonyms are: " << endl;
	displayList(start);
}

void Word::readData()
{
	cout << " Enter the word: ";
	cin >> word;

	cout << " Enter the synonyms: ";
	string synonym;
	cin >> synonym;

	adaugaInceput(start, synonym);
}



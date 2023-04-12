#pragma once
#include <iostream>
#include <string>


using namespace std;

class Word
{
public:
	Word();

	void addSynonym();
	void dataDisplay();
	void readData();


private:
	string word;

	struct NOD
	{
		string value;
		NOD* next;



	};
	NOD* start = NULL;
	void displayList(NOD* start)
	{
		while (start != NULL)
		{
			cout << start->value << endl;
			start = start->next;
		}
	}
	void adaugaInceput(NOD*& start, string newValue)
	{
		NOD* prim = new NOD;
		prim->value = newValue;
		prim->next = start;
		start = prim;
	}
	void addSynonym(NOD*& start, string newValue)
	{
		NOD* prim = new NOD;
		prim->value = newValue;
		prim->next = NULL;

		NOD* currentSynonym = start;
		while (currentSynonym->next != NULL)

			currentSynonym = currentSynonym->next;

		currentSynonym->next = prim;
	}

};



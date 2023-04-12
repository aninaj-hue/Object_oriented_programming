#pragma once
#include <iostream>
#include <string>

using namespace std;
#ifndef _DOG_
#define _DOG_
class Dog
{
protected:
	string name;
	string color;
	int height;
	int weight;
	int age;

public:
	Dog();
	~Dog()
	{
		//cout << "Destructor Dog." << endl;
	}
	virtual void ReadingData() = 0;
	virtual void DataDisplay() = 0;
	string Name();
	void SetName(string nume);
	string Color();
	void SetColor(string culoare);
	int Height();
	void SetHeight(int inaltime);
	int Weight();
	void SetWeight(int greutate);
	int Age();
	void SetAge(int varsta);

};
#endif


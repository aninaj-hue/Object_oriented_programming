#pragma once
#include <iostream>
#include <string>

using namespace std;

class Dog
{
private:
	string name;
	string color;
	int height;
	int weight;
	int age;

public:
	Dog();
	~Dog()
	{
		//cout << "Destructorul clasei Caine." << endl;
	}
	void ReadingData();
	void DataDisplay();
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

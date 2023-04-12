#include<iostream>
using namespace std;

class jucator
{ public:
	jucator(string nume, int varsta, string sport, string echipa)
	{
		this->nume = nume;
		this->varsta = varsta;
		this->sport = sport;
		this->echipa = echipa;
	}

	friend ostream& operator <<(ostream& os, jucator& j)
	{
		os << "Nume" << j.nume << endl;
		os << "Varsta" << j.varsta << endl;
		os << "Sport" << j.sport << endl;
		os << "Echipa" << j.echipa << endl;
		return os;
	}

	jucator& operator=(jucator& j)
	{
		this->nume = j.nume;
		this->varsta = j.varsta;
		this->sport = j.sport;
		this->echipa = j.echipa;
		return *this;
	}
	jucator()
	{
		this->nume =" ";
		this->varsta = 0;
		this->sport = " ";
		this->echipa = " ";
	}
	friend istream& operator>>(istream& is, jucator& j)
	{
		is >> j.nume >> j.varsta >> j.sport >> j.echipa;
		return is;
	}
	bool  operator==(jucator& j)
	{
		if(this->nume==j.nume)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

private:
	string nume;
	int varsta;
	string sport;
	string echipa;
};
int main()
{
	int n;
	cout << "Introduceti un nr de jucatori";
	cin >> n;
	jucator* jucatori = new jucator[n];
	for (int i = 0; i < n; i++)
	{
		cin >> jucatori[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (jucatori[n + i] == jucatori[i])

		{
			n = n * 2;
		}
	
	}
	for (int i = 0; i < n; i++)
	{
		cout << jucatori[i];
	}

}
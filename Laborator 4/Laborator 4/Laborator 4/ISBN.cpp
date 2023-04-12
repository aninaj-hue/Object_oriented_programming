#include "ISBN.h"
#include <iostream>
#include <string>

CISBN::CISBN()
{
	this->mISBN = " ";
}

void CISBN::CitireISBN()
{
	cout << "ISBN: " << endl;
	cin >> this->mISBN;
}
void CISBN::AfisareISBN()
{
	cout << "ISBN cartii este: " << this->mISBN << endl;
}
string CISBN::FISBN()
{
	return this->mISBN;
}
void CISBN::SetFISBN(string C_ISBN)
{
	this->mISBN = C_ISBN;

}
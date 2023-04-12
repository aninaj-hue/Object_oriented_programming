#pragma once

//#ifndef _ISBN_
//#define _ISBN_
#include <string>

using namespace std;

class CISBN {
public:

	CISBN();//implicit constructor
	string FISBN();
	void SetFISBN(string ISBN);//setter

	void CitireISBN();
	void AfisareISBN();

private:

	string mISBN;


};


//#endif
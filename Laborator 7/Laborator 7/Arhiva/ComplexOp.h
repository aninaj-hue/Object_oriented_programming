#pragma once
#include<iostream>
#include <cmath>

using namespace std;

#ifndef _COMPLEXOP_
#define _COMPLEXOP_
class ComplexOp
{
public:

	ComplexOp(float real) :
		ReZ(real),
		ImZ(0)
	{
		cout << "Constructor with one parameter." << endl;
	}
	ComplexOp(float real = 0, float img = 0) :
		ReZ(real),
		ImZ(img)
	{}

	//Copy constructor      z1(z2);
	ComplexOp(const ComplexOp& z) :
		ReZ(z.ReZ),
		ImZ(z.ImZ)
	{
		cout << "Copy constructor" << endl;
	}
	ComplexOp operator=(const ComplexOp&);


	friend float operator~(const ComplexOp&);
	friend ComplexOp operator* (const ComplexOp&, const ComplexOp&);
	friend ComplexOp operator^(const ComplexOp&, const int&);
	friend ComplexOp operator+(const ComplexOp&, const ComplexOp&);
	friend ComplexOp operator- (const ComplexOp&, const ComplexOp&);
	friend ComplexOp operator/(const ComplexOp&, const ComplexOp&);


	void afisare();
private:
	float ReZ;
	float ImZ;


};
#endif


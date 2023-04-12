#include "complexOp.h"


float operator~(const ComplexOp& z1)
{
	float rez;

	rez = sqrt((z1.ReZ * z1.ReZ) + (z1.ImZ * z1.ImZ));

	return rez;
}
ComplexOp operator* (const ComplexOp& z1, const ComplexOp& z2)
{
	ComplexOp rez;
	rez.ReZ = ((z1.ReZ * z2.ReZ) - (z1.ImZ * z2.ImZ));
	rez.ImZ = ((z1.ReZ * z2.ImZ) + (z2.ReZ * z1.ImZ));

	return rez;
}

ComplexOp operator^(const ComplexOp& z1, const int& exp)
{

	ComplexOp rez(1, 0);
	for (int i = 1; i <= exp; i++)
	{

		rez = rez * z1;

	}
	return rez;
}

//   z3=        z1+z2

ComplexOp operator+(const ComplexOp& z1, const ComplexOp& z2)
{
	ComplexOp rez;
	rez.ReZ = z1.ReZ + z2.ReZ;
	rez.ImZ = z1.ImZ + z2.ImZ;

	return rez;
}
ComplexOp operator- (const ComplexOp& z1, const ComplexOp& z2)
{
	ComplexOp rez;

	rez.ReZ = z1.ReZ - z2.ReZ;
	rez.ImZ = z1.ImZ - z2.ImZ;

	return rez;
}
ComplexOp operator/(const ComplexOp& z1, const ComplexOp& z2)
{
	ComplexOp rez;
	rez.ReZ = ((z1.ReZ * z2.ReZ) + (z1.ImZ * z2.ImZ)) / ((z2.ReZ * z2.ReZ) + (z2.ImZ * z2.ImZ));
	rez.ImZ = ((z2.ReZ * z1.ImZ) - (z1.ReZ * z2.ImZ)) / ((z2.ReZ * z2.ReZ) + (z2.ImZ * z2.ImZ));

	return rez;
}

void ComplexOp::afisare()
{
	cout << ReZ << " + " << ImZ << "i" << endl;

}


//   z1,z2        z1 = z2;
ComplexOp ComplexOp::operator=(const ComplexOp& z1)
{
	cout << "Assignment operator" << endl;
	this->ReZ = z1.ReZ;
	this->ImZ = z1.ImZ;

	return *this;



}
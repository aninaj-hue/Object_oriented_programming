#include "complexOp.h"

int main()
{
	ComplexOp z1(2, 2);
	ComplexOp z2(5, 0);
	ComplexOp z3(2, 3);
	ComplexOp z4(1, 3);
	ComplexOp z5(2, 3);
	ComplexOp z6(3, 3);


	ComplexOp result;

	result = ((z1 ^ 3) + (z3 ^ 3) + (z5 ^ 3)) / ((z2 ^ 4) + (z4 ^ 4) + (z6 ^ 4));

	result.afisare();


	return 0;

}
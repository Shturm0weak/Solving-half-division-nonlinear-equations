#include "pch.h"
#include <iostream>
#include "Function.h"

int main()
{
	double a, b;
	int pickednumber = 1;
	bool accuracyflag = false;
	double accuracy;
	printf("Enter accuracy value ");
	std::cin >> accuracy;
	printf("Enter the A value ");
	std::cin >> a;
	printf("Enter the B value ");
	std::cin >> b;
	printf("Chose the method of calculation\n\
For loop = 1\n\
While loop = 2\n\
Do while = 3\n\
value = ");
	std::cin >> pickednumber;
	switch (pickednumber)
	{
	case 1:
		accuracyflag = CustomFunctions::HalvingFor(a, b,accuracy);
		break;
	case 2:
		accuracyflag = CustomFunctions::HalvingWhile(a,b,accuracy);
		break;
	case 3:
		accuracyflag = CustomFunctions::HalvingDoWhile(a, b,accuracy);
		break;
	default:
		break;
	}
	CustomFunctions::Printdata(accuracyflag);
}

#include "pch.h"
#include <iostream>
#include "Function.h"

double _C;

double CustomFunctions::ExampleFunction(double x) {
	return -2.5 + sin(2.f * x) + sqrt(x);
}

bool CustomFunctions::HalvingFor(double _A, double _B,double accuracy) {
	if (ExampleFunction(_A) * ExampleFunction(_B) > 0) {
		printf("A root is invalid in given interval!");
		return false;
	}

	_C = (_A + _B) / 2.f;

	for (int i = 0; i < LoopLimit; i++) {
		if (abs(_A - _B) < accuracy) {
			return true;
		}
		if (ExampleFunction(_C) * ExampleFunction(_A) < 0) {
			_B = _C;
		}
		else {
			_A = _C;
		}
		_C = (_A + _B) / 2.f;
	}
	printf("The accuracy was't reached!");
	return false;
}

bool CustomFunctions::HalvingDoWhile(double _A, double _B, double accuracy) {
	if (ExampleFunction(_A) * ExampleFunction(_B) > 0) {
		printf("A root is invalid in given interval!");
		return false;
	}

	_C = (_A + _B) / 2.f;
	do{
		if (_C == (_A + _B)/2 && _B == _C || _C == (_A + _B) / 2 && _A == _C) {
			printf("Given accuracy can't be reached, infinite loop\nSo maximum accuracy is\n");
			return true;
		}
		if (abs(_A - _B) < accuracy) {
			return true;
		}
		if (ExampleFunction(_C) * ExampleFunction(_A) < 0) {
			_B = _C;
		}
		else {
			_A = _C;
		}
		_C = (_A + _B) / 2.f;
		//printf("%lf",_C);
	}while (abs(_A - _B - 1) > accuracy);
	printf("The accuracy was't reached!");
	return false;
}

bool CustomFunctions::HalvingWhile(double _A, double _B, double accuracy) {
	if (ExampleFunction(_A) * ExampleFunction(_B) > 0) {
		printf("A root is invalid in given interval!");
		return false;
	}

	_C = (_A + _B) / 2.f;

	while(abs(_A - _B - 1) > accuracy) {
		if (_C == (_A + _B) / 2 && _B == _C || _C == (_A + _B) / 2 && _A == _C) {
			printf("Given accuracy can't be reached, infinite loop\nSo maximum accuracy is\n");
			return true;
		}
		if (abs(_A - _B) < accuracy) {
			return true;
		}
		if (ExampleFunction(_C) * ExampleFunction(_A) < 0) {
			_B = _C;
		}
		else {
			_A = _C;
		}
		_C = (_A + _B) / 2.f;
		//printf("%lf",_C);
	}
	printf("The accuracy was't reached!");
	return false;
}

void CustomFunctions::Printdata(bool flag) {
	if (flag) {
		std::cout.precision(16);
		std::cout << "The root of equation is " << _C << std::endl;
		std::cout << "The value of function is " << ExampleFunction(_C);
	}
}
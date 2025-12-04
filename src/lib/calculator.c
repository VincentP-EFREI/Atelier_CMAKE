#include "./../../include/calculator.h"

double _add(double a, double b) {
	return a+b;
}

double _sub(double a, double b) {
	return a-b;
}

double _mul(double a, double b) {
	return a*b;
}

double _div(double a, double b) {
	return a/b;
}

double _pow(int a, int b) {
	for(int i = 0; i < b-1; i++) {
		a *= a
	}
	return a;
}

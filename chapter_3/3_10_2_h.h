#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
using namespace std;

class Add {
	int a, b;
public:
	void setValue(int x, int y) { a = x; b = y; }
	int calculate() { return a + b; }
};

class Sub {
	int a, b;
public:
	void setValue(int x, int y) { a = x; b = y; }
	int calculate() { return a - b; }
};

class Mul {
	int a, b;
public:
	void setValue(int x, int y) { a = x; b = y; }
	int calculate() { return a * b; }
};

class Div {
	int a, b;
public:
	void setValue(int x, int y) { a = x; b = y; }
	int calculate() { return a / b; }
};

#endif 

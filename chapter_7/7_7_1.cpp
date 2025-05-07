#include<iostream>
using namespace std;


class Matrix {
private:
	int a, b, c, d;
public:
	Matrix(int a=0, int b=0, int c=0, int d=0) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
	}
	void show() {
		cout << "Matrix = { " << a << ' ' << b << ' ' << c << ' ' << d<<" }" << endl;
	}
	void operator>>(int *x) {
		x[0] = this->a;
		x[1] = this->b;
		x[2] = this->c;
		x[3] = this->d;
	}
	Matrix operator<<(int* y) {
		this->a = y[0];
		this->b = y[1];
		this->c = y[2];
		this->d = y[3];
		return *this;
	}

};

int main() {
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1,2,3,4 };
	a >> x;
	b << y;

	for (int i = 0; i < 4; i++) cout << x[i] << ' ';
	cout << endl;
	b.show();
}


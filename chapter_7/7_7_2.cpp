#include<iostream>
using namespace std;

class Matrix {
private:
	int a, b, c, d;
public:
	Matrix(int a = 0, int b = 0, int c = 0, int d = 0) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
	}
	void show() {
		cout << "Matrix = { " << a << ' ' << b << ' ' << c << ' ' << d << " }" << endl;
	}
	friend void operator>>(const Matrix& me, int* x);
	friend Matrix& operator<<(Matrix& me, int* y);
};
void operator>>(const Matrix& me,int* x) {
	x[0] = me.a;
	x[1] = me.b;
	x[2] = me.c;
	x[3] = me.d;
}
Matrix& operator<< (Matrix& me,int* y) {
	me.a = y[0];
	me.b = y[1];
	me.c = y[2];
	me.d = y[3];
	return me;
}

int main() {
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1,2,3,4 };
	a >> x;
	b << y;
	
	for (int i = 0; i < 4; i++) cout << x[i] << ' ';
	cout << endl;
	b.show();
}
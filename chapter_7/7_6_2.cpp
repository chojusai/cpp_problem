#include<iostream>
using namespace std;
class Matrix {
	int a, b, c, d;
public:
	Matrix(int a=0, int b=0, int c=0, int d=0) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
	}
	void show() {
		cout << "Matrix = { " << a << ' ' << b << ' ' << c << ' ' << d << " }" << endl;
	}
	friend Matrix operator+(Matrix me, Matrix other);
	friend Matrix& operator+=(Matrix& me, Matrix& other);
	friend bool operator==(Matrix me, Matrix other);
};
Matrix operator+(Matrix me, Matrix other) {
	Matrix tmp;
	tmp.a = me.a + other.a;
	tmp.b = me.b + other.b;
	tmp.c = me.c + other.c;
	tmp.d = me.d + other.d;
	return tmp;
}
Matrix& operator+=(Matrix& me, Matrix& other) {
	me.a += other.a;
	me.b += other.b;
	me.c += other.c;
	me.d += other.d;
	return me;
}
bool operator==(Matrix me, Matrix other) {
	if (me.a == other.a && me.b == other.b && me.c == other.c && me.d == other.d) {
		return true;
	}
	else {
		return false;
	}
}
int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show(); b.show(); c.show();
	if (a == c) {
		cout << "a and c are the same" << endl;
	}
}
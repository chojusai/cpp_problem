#include<iostream>
using namespace std;

class Matrix {
	int a;
	int b;
	int c;
	int d;
public:
	void show() {
		cout<<"Matrix = { " << a << ' ' << b << ' ' << c << ' ' << d << " }" << endl;
		
	}
	Matrix(int a = 0, int b = 0, int c = 0, int d = 0) {
		this->a = a;
		this-> b = b;
		this->c = c;
		this->d = d;
	}
	
	Matrix operator+(Matrix other) {
		Matrix tmp;
		tmp.a = this->a + other.a;
		tmp.b = this->b + other.b;
		tmp.c = this->c + other.c;
		tmp.d = this->d + other.d;
		return tmp;
	}
	Matrix& operator+=(Matrix other) {
		this->a += other.a;
		this->b += other.b;
		this->c += other.c;
		this->d += other.d;
		return *this;
	}
	bool operator==(Matrix other) {
		if (this->a == other.a && this->b == other.b && this->c == other.c && this->d == other.d) {
			return true;
		}
		else {
			return false;
		}
	}


};

int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show(); b.show(); c.show();
	if (a == c) {
		cout << "a and c are the same" << endl;
	}
}
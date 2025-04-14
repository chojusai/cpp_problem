#include<iostream>
using namespace std;

class Circle {
private:
	int r;
public:
	Circle() {
		
	}

	Circle(int r) {
		this->r = r;
		
	}
	void show() {
		cout << "r: " << r << endl;
	}
	void swap(Circle& a,Circle& b){
		Circle tmep = 0;
		tmep = a;
		a = b;
		b = tmep;

	}
};
int main() {
	Circle a(1), b(2);
	swap(a, b);
	a.show();
	b.show();
}
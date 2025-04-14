#include<iostream>
using namespace std;

int big(int a, int b) {
	int max = 100;
	int bigger = a;

	if (bigger < b) {
		bigger = b;
	}
	if (bigger > max) {
		return max;
	}
	return bigger;
	
}
int big(int a, int b, int c) {
	int max=c;
	int bigger = a;

	if (bigger < b) {
		bigger = b;
	}
	if (bigger > max) {
		return max;
	}
	return bigger;
	
}

int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
}
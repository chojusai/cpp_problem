#include<iostream>
using namespace std;

int add(int a[], int index) {
	int result = 0;
	for (int i = 0; i < index; i++) {
		result += a[i];
	}
	return result;
}
int add(int a[], int index, int b[]) {
	int result = 0;
	for (int i = 0; i < index; i++) {
		result += a[i] + b[i];
	}
	return result;
}
int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,10 };
	int c = add(a, 5);
	int d = add(a, 5, b);
	cout << c << endl;
	cout << d << endl;
}
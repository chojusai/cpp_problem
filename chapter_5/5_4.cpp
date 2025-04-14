#include<iostream>

using namespace std;

bool bigger(int a, int b, int& big) {
	if (a == b) {
		return true;
	}
	else {
		big = a;
		if (big < b) {
			big= b;
		}
		return false;
	}
}
int main() {
	int a = 10, b = 5;
	int big;
	cout<<bigger(a, b, big)<<endl;
	cout << big << endl;
}
#include<iostream>
using namespace std;
int main() {
	int a, b;
	cout << "두 수를 입력하라>>";
	cin >> a >> b;
	int result = 0;
	if (a > b) {
		result = a;
	}
	else if (a < b) {
		result = b;
	}
	else {
		result = a;
	}
	cout << "큰 수" << '=' << result;

}
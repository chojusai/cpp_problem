#include<iostream>
using namespace std;
int main() {
	int a, b;
	cout << "�� ���� �Է��϶�>>";
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
	cout << "ū ��" << '=' << result;

}
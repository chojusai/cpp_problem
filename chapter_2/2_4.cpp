#include<iostream>
using namespace std;

int main() {
	cout << "5���� �Ǽ���  �Է��϶�>>";
	float arr[5];
	float max = -999999;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << "���� ū ��" << max;
	
	
}
#include<iostream>

using namespace std;

int main() {
	char arr[100];
	int cnt = 0;

	cout << "���ڵ��� �Է��϶�(100�� �̸�).";

	cin.getline(arr, 100, '\n');
	
	for (int i = 0; i < 100; i++) {
		if (arr[i] == 'x') {
			cnt++;
		}
	}
		
	
	
	cout << "x�� ������" << cnt;
}
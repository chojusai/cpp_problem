#include<iostream>
using namespace std;

int main() {
	cout << "���ڿ� �Է�>>";
	char arr[100];
	cin.getline(arr, 100, '\n');
	for (int i = 0; i < strlen(arr); i++) {
		for (int j = 0; j < i + 1; j++) {
			cout << arr[j];
		}
		cout << '\n';
	}

}
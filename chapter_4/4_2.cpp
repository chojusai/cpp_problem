#include<iostream>
using namespace std;

int main() {
	int* arr=new int[5];
	double avg = 0;
	double sum = 0;
	cout << "���� 5�� �Է�>> ";
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	avg = sum / 5;
	cout << "��� " << avg;
}
#include<iostream>
using namespace std;

int main() {
	cout << "5개의 실수를  입력하라>>";
	float arr[5];
	float max = -999999;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << "제일 큰 수" << max;
	
	
}
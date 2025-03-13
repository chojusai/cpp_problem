#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char arr[100];
	while (true) {
		cout << "종료하고싶으면 yes를 입력하세요";
		cin.getline(arr, 100, '\n');
		if (strcmp(arr, "yes") == 0) {
			cout << "종료합니다";
			break;
		}
		
	}
}
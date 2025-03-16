#include<iostream>
#include<cstring>
using namespace std;
int main() {
	cout << "문자열 입력>> ";
	char text[100];
	cin.getline(text, 100, '\n');
	for (int i = 0; i < strlen(text); i++) {
		for (int j = 0; j < i + 1; j++) {
			cout << text[j];
		}
		cout << '\n';

	}
}
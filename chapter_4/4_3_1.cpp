#include<iostream>
#include<string>
using namespace std;

int main() {
	string text;
	cout << "���ڿ� �Է�>> ";
	getline(cin, text);
	int cnt = 0;
	for (int i = 0; i < text.length(); i++) {
		if (text[i] == 'a') {
			cnt += 1;
		}
	}
	cout << "���� a�� " << cnt << "�� �ֽ��ϴ�.";

	
}
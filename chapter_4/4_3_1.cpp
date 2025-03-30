#include<iostream>
#include<string>
using namespace std;

int main() {
	string text;
	cout << "문자열 입력>> ";
	getline(cin, text);
	int cnt = 0;
	for (int i = 0; i < text.length(); i++) {
		if (text[i] == 'a') {
			cnt += 1;
		}
	}
	cout << "문자 a는 " << cnt << "개 있습니다.";

	
}
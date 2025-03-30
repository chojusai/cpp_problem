#include<iostream>
#include<string>
using namespace std;

int main() {
	string text;
	cout << "문자열 입력>>";
	getline(cin, text);
	size_t pos = text.find('a');
	int cnt = 0;
	while (pos != string::npos) {
		cnt += 1;
		pos = text.find('a', pos + 1);
	}
	cout << "문자 a는 " << cnt << "개 있습니다." << endl;
}
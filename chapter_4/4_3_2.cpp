#include<iostream>
#include<string>
using namespace std;

int main() {
	string text;
	cout << "���ڿ� �Է�>>";
	getline(cin, text);
	size_t pos = text.find('a');
	int cnt = 0;
	while (pos != string::npos) {
		cnt += 1;
		pos = text.find('a', pos + 1);
	}
	cout << "���� a�� " << cnt << "�� �ֽ��ϴ�." << endl;
}
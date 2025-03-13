#include<iostream>
#include<cstring>
using namespace std;
int main() {

	string password,password_2;
	cout << "새 암호를 입력하세요";
	cin >> password;
	cout << "새 암호를 다시 한 번 입력하세요";
	cin >> password_2;
	if (password == password_2) {
		cout << "같습니다.";
	}
	else {
		cout << "틀렸습니다";
	}
}
#include<iostream>
#include<cstring>
using namespace std;
int main() {

	string password,password_2;
	cout << "�� ��ȣ�� �Է��ϼ���";
	cin >> password;
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���";
	cin >> password_2;
	if (password == password_2) {
		cout << "�����ϴ�.";
	}
	else {
		cout << "Ʋ�Ƚ��ϴ�";
	}
}
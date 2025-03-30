#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	
	cout << "아래에 한 줄 입력하세요.(exit를 입력하면 종료합니다)"<<endl;
	while (true) {
		cout << ">>";
		getline(cin, str);
		if (str == "exit") {
			break;
		}
		for (int i = str.length(); i >=0; i--) {
			cout << str[i];
		}
		cout << endl;

	};
}
#include<iostream>
using namespace std;

int main() {
	int num;
	int num_person;
	cout << "***** 승리장에 오신 것을 환영합니다. *****";

	while (true) {
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4" << '\n';
		cin >> num;
		switch (num)
		{
		case(1):
		{
			cout << "몇인분?" << '\n';
			cin >> num_person;
			cout << "짬뽕" << num_person << "인분 나왔습니다"<<'\n';
			break;
		}
		case(2):
		{
			cout << "몇인분?" << '\n';
			cin >> num_person;
			cout << "짜장" << num_person << "인분 나왔습니다" << '\n';
			break;
		}
		case(3):
		{
			cout << "몇인분?" << '\n';
			cin >> num_person;
			cout << "군만두" << num_person << "인분 나왔습니다" << '\n';
			break;
		}
		case(4):
		{
			cout << "오늘 영업은 끝났습니다." << '\n';
			break;
		}
		default:
			cout << "다시 주문하세요!!" << '\n';
			break;
		}
		
		if (num == 4) {
			break;
		}
	}
	
}
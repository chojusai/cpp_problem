#include<iostream>
#include<cstring>
using namespace std;

int main() {
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << '\n';
	char coffee[100];
	int num;
	int sum = 0;
	int cost = 0;
	
	while (true)
	{
		cout << "주문>>";
		cin >> coffee >> num;
			if (strcmp(coffee, "에스프레소") == 0) {
				cost = 2000 * num;
				sum = sum + cost;
				cout << cost << "원입니다.맛있게 드세요" << '\n';
			}
			else if (strcmp(coffee, "아메리카노") == 0) {
				cost = 2300 * num;
				sum = sum + cost;
				cout << cost << "원입니다.맛있게 드세요" << '\n';
			}
			else if (strcmp(coffee, "카푸치노") == 0) {

				cost = 2500 * num;
				sum = sum + cost;
				cout << cost << "원입니다.맛있게 드세요" << '\n';
			}

		
		if(sum>=20000) {
			cout << "오늘" << sum << "원을 판매하여 카페를 닫습니다. 내일봐요~~" << '\n';
			break;
		}
	}
	

	

}
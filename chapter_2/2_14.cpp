#include<iostream>
#include<cstring>
using namespace std;

int main() {
	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�." << '\n';
	char coffee[100];
	int num;
	int sum = 0;
	int cost = 0;
	
	while (true)
	{
		cout << "�ֹ�>>";
		cin >> coffee >> num;
			if (strcmp(coffee, "����������") == 0) {
				cost = 2000 * num;
				sum = sum + cost;
				cout << cost << "���Դϴ�.���ְ� �弼��" << '\n';
			}
			else if (strcmp(coffee, "�Ƹ޸�ī��") == 0) {
				cost = 2300 * num;
				sum = sum + cost;
				cout << cost << "���Դϴ�.���ְ� �弼��" << '\n';
			}
			else if (strcmp(coffee, "īǪġ��") == 0) {

				cost = 2500 * num;
				sum = sum + cost;
				cout << cost << "���Դϴ�.���ְ� �弼��" << '\n';
			}

		
		if(sum>=20000) {
			cout << "����" << sum << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���Ϻ���~~" << '\n';
			break;
		}
	}
	

	

}
#include<iostream>
using namespace std;

int main() {
	int num;
	int num_person;
	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****";

	while (true) {
		cout << "«��:1, ¥��:2, ������:3, ����:4" << '\n';
		cin >> num;
		switch (num)
		{
		case(1):
		{
			cout << "���κ�?" << '\n';
			cin >> num_person;
			cout << "«��" << num_person << "�κ� ���Խ��ϴ�"<<'\n';
			break;
		}
		case(2):
		{
			cout << "���κ�?" << '\n';
			cin >> num_person;
			cout << "¥��" << num_person << "�κ� ���Խ��ϴ�" << '\n';
			break;
		}
		case(3):
		{
			cout << "���κ�?" << '\n';
			cin >> num_person;
			cout << "������" << num_person << "�κ� ���Խ��ϴ�" << '\n';
			break;
		}
		case(4):
		{
			cout << "���� ������ �������ϴ�." << '\n';
			break;
		}
		default:
			cout << "�ٽ� �ֹ��ϼ���!!" << '\n';
			break;
		}
		
		if (num == 4) {
			break;
		}
	}
	
}
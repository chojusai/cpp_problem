#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char arr[100];
	while (true) {
		cout << "�����ϰ������ yes�� �Է��ϼ���";
		cin.getline(arr, 100, '\n');
		if (strcmp(arr, "yes") == 0) {
			cout << "�����մϴ�";
			break;
		}
		
	}
}
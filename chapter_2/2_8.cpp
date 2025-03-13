#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

#include<cstring>
using namespace std;
int main() {
	char arr[100];
	char long_name[100]="";
	int max_len=0;
	int len = 0;
	char name[100];

	cout << "5명의 이름을 ';'으로 구분하여 입력하세요";
	for (int i = 1; i < 6; i++) {
		cin.getline(arr, 100, ';');
		strcpy(name, arr);
		cout << i << " :" << ' ' << name<<'\n';
		len = strlen(arr);
		if (max_len < len) {
			max_len = len;
			strcpy(long_name, arr);
		}
	}
	cout << long_name;
	

}
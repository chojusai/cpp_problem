#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

int main() {
	char arr[10000];
	char alphabet[26];
	
	/*���ĺ� ä���*/
	for (int i = 0; i < 26; i++) {
		alphabet[i] = 'a' + i;
	}

	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�." << '\n'
		<< "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�." << '\n';
	
	cin.getline(arr, 10000, ';');

	
	/*�ҹ��� �ٲٱ�*/
	for (int i = 0; i < strlen(arr); i++) {
		arr[i] = tolower(arr[i]);
		
	}

	/*�� ���ĺ� ��*/
	int sum = 0;
	for (int i = 0; i < strlen(alphabet); i++) {
		
		for (int j = 0; j < strlen(arr); j++) {
			if (alphabet[i] == arr[j]) {
				sum++;

			}

		}

		
	}
	cout << "�� ���ĺ� �� " << sum<< '\n';
	
	/*������׷� �׸���*/
	for (int i = 0; i < strlen(alphabet); i++) {
		int cnt = 0;
		for (int j = 0; j < strlen(arr); j++) {
			if (alphabet[i] == arr[j]) {
				cnt++;
				
			}

		}
		
		string result(cnt, '*');
		cout << alphabet[i] << ' ' << '(' << cnt << ')' << result<<'\n';
	}


}
#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

int main() {
	char arr[10000];
	char alphabet[26];
	
	/*알파벳 채우기*/
	for (int i = 0; i < 26; i++) {
		alphabet[i] = 'a' + i;
	}

	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << '\n'
		<< "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << '\n';
	
	cin.getline(arr, 10000, ';');

	
	/*소문자 바꾸기*/
	for (int i = 0; i < strlen(arr); i++) {
		arr[i] = tolower(arr[i]);
		
	}

	/*총 알파벳 수*/
	int sum = 0;
	for (int i = 0; i < strlen(alphabet); i++) {
		
		for (int j = 0; j < strlen(arr); j++) {
			if (alphabet[i] == arr[j]) {
				sum++;

			}

		}

		
	}
	cout << "총 알파벳 수 " << sum<< '\n';
	
	/*히스토그램 그리기*/
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
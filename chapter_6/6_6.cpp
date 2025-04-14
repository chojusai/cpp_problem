#include<iostream>
using namespace std;

class ArrayUtility2 {
public:
	static int* concat(int s1[], int s2[], int size);
	
	static int* remove(int s1[], int s2[],int size,int& retSize);
};

int* ArrayUtility2::concat(int s1[], int s2[], int size) {
	int* result = new int[size * 2];
	for (int i = 0; i < size; i++) {
		result[i] = s1[i];
	}
	for (int i = 0; i < size+1; i++) {
		result[size+i] = s2[i];
	}
	for (int i = 0; i < (size * 2); i++) {
		cout << result[i] << ' ';
	}
	cout << endl;
	return result;
	
	
}
int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize) {
	cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 2" << endl;
	int cnt = 0;
	int* result = new int[size];
	for (int i = 0; i < size; i++) {
		bool check = false;
		for (int j = 0; j < size; j++) {
			if (s1[i] == s2[j]) {
				check = true;
				break;
			}
		}
		if (check == false) {
			cnt++;
			result[i] = s1[i];
			cout << s1[i]<<' ';
		}
	}
	retSize = cnt;
	return result;

}

int main() {
	cout << "정수를 5 개 입력하라. 배열 x에 삽입한다.>>";
	int x[5];
	int num;
	for (int i = 0; i < 5; i++) {
		cin >> num;
		x[i] = num;
	}
	cout << "정수를 5 개 입력하라. 배열 y에 삽입한다.>>";
	int y[5];
	for (int i = 0; i < 5; i++) {
		cin >> num;
		y[i] = num;
	}
	ArrayUtility2 arr;
	int *a = arr.concat(x, y, 5);
	
	int retSize;
	int* b = arr.remove(x, y,5, retSize);
	
	

	
}
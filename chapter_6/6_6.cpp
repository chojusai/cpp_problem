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
	cout << "�迭 x[]���� y[]�� �� ����� ����Ѵ�. ������ 2" << endl;
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
	cout << "������ 5 �� �Է��϶�. �迭 x�� �����Ѵ�.>>";
	int x[5];
	int num;
	for (int i = 0; i < 5; i++) {
		cin >> num;
		x[i] = num;
	}
	cout << "������ 5 �� �Է��϶�. �迭 y�� �����Ѵ�.>>";
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
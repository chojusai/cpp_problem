#include<iostream>
using namespace std;

class Statistics {
	int size;
	int* arr;
	int capacity;

public:
	Statistics(int size = 0) {
		this->size = size;
		this->capacity = 1;
		this->arr = new int[capacity];

	}
	bool operator!() {
		if (this->size == 0) {
			return true;
		}
		else {
			return false;
		}
	}
	void ensureCapacity() {
		if (size >= capacity) {
			int newCapacity = capacity * 2;
			int* newArr = new int[newCapacity];
			for (int i = 0; i < size; i++) {
				newArr[i] = arr[i];
			}
			delete[] arr;
			arr = newArr;
			capacity = newCapacity;
		}
	}
	Statistics& operator<<(int x) {
		ensureCapacity();
		int i = size;
		arr[i] = x;
		size++;
		return *this;
	}
	void operator~() {
		for (int i = 0; i < size; i++) {
			cout << arr[i] << ' ';
		}
		cout << endl;
	}
	Statistics& operator>>(int &avg) {
		int result = 0;
		for (int i = 0; i < size; i++) {
			result += arr[i];
		}
		avg = result/size;
		return *this;
	}
	~Statistics() {
		delete[] arr;
	}

};
int main() {
	Statistics stat;
	if (!stat) cout << "현재 통계 데이터가 없습니다." << endl;

	int x[5];
	cout << "5 개의 정수를 입력하라>>";
	for (int i = 0; i < 5; i++) cin>> x[i];

	for (int i = 0; i < 5; i++) stat << x[i];
	stat << 100 << 200;
	~stat;

	int avg;
	stat >>avg;
	cout << "avg=" << avg << endl;
}
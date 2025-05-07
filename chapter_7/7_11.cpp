#include<iostream>
using namespace std;

class Stack {
	int arr[1000] = { 0 };
	int top;
public:
	Stack() {

		top = 0;
	}
	bool operator !() {
		if (top == 0) {
			return true;
		}
		else {
			return false;
		}
	}
	Stack& operator<<(int x) {
		arr[top] = x;
		top++;
		return *this;
	}
	Stack& operator>>(int& x) {
		x = arr[--top];
		return *this;
	}
};
int main() {
	Stack stack;
	stack << 3 << 5 << 10;
	while (true) {
		if (!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;
}
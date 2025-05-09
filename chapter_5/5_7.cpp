#include<iostream>
using namespace std;

class MyIntStack {
	int p[10];
	int tos;//스택 꼭대기 indx
public:
	
	MyIntStack() {
		tos = 0;
	};
	bool push(int n) {
		
		if (tos < 10) {
			p[tos] = n;
			tos++;
			return true;
		}
		else {
			
			return false;

		}
	}

	bool pop(int& n) {
		if (tos > 0) {
			tos--;
			n = p[tos];
			
			return true;
		}
		else {
			return false;
		}
		
	}
};

int main() {
	MyIntStack a;
	for (int i = 0; i < 11; i++) {
		if (a.push(i)) {
			cout << i << ' ';
		}
		else{
			cout << endl << i + 1 << " 번째 stack full" << endl;
		}
	}
	int n;
	for (int i = 0; i < 11; i++) {
		if (a.pop(n)) {
			cout << n << ' ';
		}
		else {
			cout << endl << i + 1 << " 번째 stack empty";
		}
	}
	cout << endl;
}
#include<iostream>
using namespace std;
int main() {
	int i = 1;
	
	for (i; i < 101; i++) {
		cout << i<<'\t';
		if (i % 10 == 0) {
			cout << "\n";
		}
	}
}
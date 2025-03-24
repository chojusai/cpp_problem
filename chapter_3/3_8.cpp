#include<iostream>
#include<string>
using namespace std;

class Integer {
private:
	int n;
public:
	Integer(int a) {
		n = a;
	}
	Integer(string a) {
		 n = stoi(a);
	}
	void set(int a) {
		 n = a;
	}
	int get() {
		return n;
	}
	int isEven() {
		if (n % 2 == 0) {
			return 1;
		}
		else {
			return 0;
		}
	}


};
int main() {
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();


}
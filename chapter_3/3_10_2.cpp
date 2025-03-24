#include"3_10_2_h.h"

#include<iostream> 

using namespace std;

int main() {
	Add a;
	Sub s;
	Mul m;
	Div d;
	while (true) {
		cout << "두 정수와 연산자를 입력하세요>> ";
		int x, y;
		char z;
		cin >> x >> y >> z;

		switch (z) {
		case'+':
			a.setValue(x, y);
			cout << a.calculate() << endl;
			break;
		case'-':
			s.setValue(x, y);
			cout << s.calculate() << endl;
			break;
		case'*':
			m.setValue(x, y);
			cout << m.calculate() << endl;
			break;
		case'/':
			d.setValue(x, y);
			cout << d.calculate() << endl;
			break;
		}

	}
}
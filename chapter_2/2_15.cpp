#include<iostream>
#include<cstring>
using namespace std;

int main() {
	int num1;
	int num2;
	char sign;
	int result = 0;

	while (true) {
		cout << "? ";
		cin >> num1 >> sign >> num2;
		if (sign == '+') {
			result = num1 + num2;
			cout << num1 << ' ' << sign << ' ' << num2 << ' ' << '=' << ' ' << result<<'\n';
			
		}
		else if(sign == '-') {
			result = num1 - num2;
			cout << num1 << ' ' << sign << ' ' << num2 << ' ' << '=' << ' ' << result<<'\n';
		}
		else if (sign == '*') {
			result = num1 * num2;
			cout << num1 << ' ' << sign << ' ' << num2 << ' ' << '=' << ' ' << result << '\n';
		}
		else if (sign == '/') {
			result = num1 / num2;
			cout << num1 << ' ' << sign << ' ' << num2 << ' ' << '=' << ' ' << result << '\n';
		}
		else if (sign == '%') {
			result = num1 % num2;
			cout << num1 << ' ' << sign << ' ' << num2 << ' ' << '=' << ' ' << result << '\n';
		}
		

	}
	
	
}
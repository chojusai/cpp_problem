#include<iostream>
using namespace std;
int sum(int a, int b) {
	int res = 0;
	for (int k = a; k <= b; k++) {
		res += k;
	}
	return res;
}
int main() {
	int k, n = 0;
	
	cout << "�� ���� �Է��ϼ���>>";
	cin >> n;
	
	cout << "1���� " << n << "������ ���� " << sum(1,n) << "�Դϴ�." << '\n';
	

}

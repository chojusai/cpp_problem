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
	
	cout << "끝 수를 입력하세요>>";
	cin >> n;
	
	cout << "1에서 " << n << "까지의 합은 " << sum(1,n) << "입니다." << '\n';
	

}

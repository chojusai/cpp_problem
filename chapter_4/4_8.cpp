#include<iostream>

using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius) {
		this->radius = radius;

	}
	double getArea() {
		return radius * radius * 3.14;
	}
};

int main() {
	int n;
	cout << "원의 개수 >>";
	cin >> n;
	
	Circle* p;
	p = new Circle[n];

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int r;
		cout << "원 " << i + 1 << "의 반지름 >>";
		cin >> r;
		(p + i)->setRadius(r);
		if ((p + i)->getArea() > 100) {
			cnt++;
		}
	}

	cout << "면적이 100보다 큰 원은 " << cnt << "개 입니다.";
	delete[] p;

}
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
	Circle arr[3];
	Circle* p=arr;
	int cnt = 0;
	for (int i = 0; i < 3; i++) {
		int r;
		cout << "�� " << i + 1 << "�� ������ >>";
		cin >> r;
		(p + i)->setRadius(r);
		if ((p + i)->getArea()>100) {
			cnt++;
		}
	}

	cout << "������ 100���� ū ���� " << cnt << "�� �Դϴ�.";
	


}
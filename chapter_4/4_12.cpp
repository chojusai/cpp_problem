#include<iostream>
using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius) {
		this->name = name;
		this->radius = radius;
	}
	double getArea() {
		return radius * radius * 3.14;
	}
	string getName() {
		return name;
	}

};
class CircleManager {
	Circle* p;
	int size;
	string name;
	int area;
	
public:
	CircleManager(int size) {

		this->size = size;
		p = new Circle[size];
	}
	~CircleManager() {
		delete[] p;

	}
	void searchByName() {
		cout << "�˻��ϰ��� �ϴ� ���� �̸�>>";
		cin >> name;
		for (int i = 0; i < size; i++) {
			if (name == p[i].getName()) {
				cout<< p[i].getArea()<<endl;
			}
		}

	}
	void getCircle(string name,int radius) {
		
	}
	void searchByArea() {
		cout << "�ּ� ������ ������ �Է��ϼ���>>";
		cin >> area;
		cout << area << "���� ū ���� �˻��մϴ�."<<endl;
		for (int i = 0; i < size; i++) {
			if ((p + i)->getArea() > area) {
				cout << (p + i)->getName() << "�� ������ " << (p + i)->getArea() << ", ";
			}
		}
	}
	Circle *get_p() {
		return p;
	}
};
int main() {
	int num;
	cout << "���� ����>> ";
	cin >> num;
	CircleManager c(num);
	for (int i = 0; i < num; i++) {
		string name;
		int r;
		cout << "�� " << i + 1 << "�� �̸��� ������ >>";
		cin >> name >> r;
		c.get_p()[i].setCircle(name, r);
	}
	c.searchByName();
	c.searchByArea();




}

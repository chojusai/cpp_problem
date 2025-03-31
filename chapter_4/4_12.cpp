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
		cout << "검색하고자 하는 원의 이름>>";
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
		cout << "최소 면적을 정수로 입력하세요>>";
		cin >> area;
		cout << area << "보다 큰 원을 검색합니다."<<endl;
		for (int i = 0; i < size; i++) {
			if ((p + i)->getArea() > area) {
				cout << (p + i)->getName() << "의 면적은 " << (p + i)->getArea() << ", ";
			}
		}
	}
	Circle *get_p() {
		return p;
	}
};
int main() {
	int num;
	cout << "원의 개수>> ";
	cin >> num;
	CircleManager c(num);
	for (int i = 0; i < num; i++) {
		string name;
		int r;
		cout << "원 " << i + 1 << "의 이름과 반지름 >>";
		cin >> name >> r;
		c.get_p()[i].setCircle(name, r);
	}
	c.searchByName();
	c.searchByArea();




}

#include<iostream>
using namespace std;

class Book {
private:
	string name;
	int price;
	int page;

public:
	Book(string name, int price, int page) {
		this->name = name;
		this->price = price;
		this->page = page;
	}
	bool operator==(string name) {
		if (this->name == name) {
			return true;
		}
		else {
			return false;
		}
	}
	bool operator==(int price) {
		if (this->price == price) {
			return true;
		}
		else {
			return false;
		}
	}
	bool operator==(Book b) {
		if (this->name == b.name && this->price == b.price && this->page == b.page) {
			return true;
		}
		else {
			return false;
		}
	}

	void show() {
		cout << name << ' ' << price << "�� " << page << ' ' << "������" << endl;
	}


};
int main() {
	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
	if (a == 30000) cout << "���� 30000��" << endl;
	if (a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl;
	if (a == b) cout << "�� å�� ���� å�Դϴ�." << endl;

}
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
		cout << name << ' ' << price << "원 " << page << ' ' << "페이지" << endl;
	}


};
int main() {
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if (a == 30000) cout << "정가 30000원" << endl;
	if (a == "명품 C++") cout << "명품 C++ 입니다." << endl;
	if (a == b) cout << "두 책이 같은 책입니다." << endl;

}
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
	friend bool operator==(Book book,string name);
	friend bool operator==(Book book,int price);
	friend bool operator==(Book book,Book b);
	void show() {
		cout << name << ' ' << price << "원 " << page << ' ' << "페이지" << endl;
	}
};
bool operator==(Book book, string name) {
	if (book.name == name) {
		return true;
	}
	else {
		return false;
	}
}
bool operator==(Book book, int price) {
	if (book.price == price) {
		return true;
	}
	else {
		return false;
	}
}
bool operator==(Book book, Book b) {
	if (book.name == b.name && book.price == b.price && book.page == b.page) {
		return true;
	}
	else {
		return false;
	}
}


int main() {
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if (a == 30000) cout << "정가 30000원" << endl;
	if (a == "명품 C++") cout << "명품 C++ 입니다." << endl;
	if (a == b) cout << "두 책이 같은 책입니다." << endl;

}
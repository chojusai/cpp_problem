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
		cout << name << ' ' << price << "�� " << page << ' ' << "������" << endl;
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
	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
	if (a == 30000) cout << "���� 30000��" << endl;
	if (a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl;
	if (a == b) cout << "�� å�� ���� å�Դϴ�." << endl;

}
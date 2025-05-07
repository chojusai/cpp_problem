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
	friend Book& operator+=(Book &book,int price);
	friend Book& operator-=(Book& book, int price);
	void show() {
		cout << name << ' ' << price << "�� " << page << ' ' << "������" << endl;
	}


};
Book& operator+=(Book& book, int price) {
	book.price += price;
	return book;
}
Book& operator-=(Book& book, int price) {
	book.price -=price;
	return book;
}
int main() {
	Book a("û��", 20000, 300), b("�̷�", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();

}
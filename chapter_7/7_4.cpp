#include<iostream>
#include<string>
using namespace std;

class Book {
	string name;
	int price;
	int page;

public:
	Book(string name, int price, int page) {
		this->name = name;
		this->price = price;
		this->page = page;
	}
	string getTitle() {
		return name;
	}
	friend bool operator < (string str, Book b);
};
bool operator<(string str, Book b) {
	if (str < b.name) {
		return true;
	}
	else {
		return false;
	}
}
int main() {
	Book a("û��", 20000, 300);
	string b;
	cout << "å �̸��� �Է��ϼ���>>";
	getline(cin, b);
	if (b < a) {
		cout << a.getTitle() << "�� " << b << "���� �ڿ� �ֱ���!" << endl;
	};
}
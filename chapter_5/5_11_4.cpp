
#include<iostream>
#include<string>
using namespace std;

class Book {
	string title;
	int price;
public:
	Book(string title, int price) {
		this->price = price;
		this->title = title;
	}
	Book(const Book& a) {
		this->title = a.title;
		this->price = a.price;
	
	}
	
	void set(const char* title, int price) {
		this->title = title;
		this->price = price;

	}

	void show() {
		cout << title << ' ' << price << "��" << endl;
	}

};

int main() {
	Book cpp("��ǰC++", 10000);
	Book java = cpp;
	java.set("��ǰ�ڹ�", 12000);
	cpp.show();
	java.show();

}
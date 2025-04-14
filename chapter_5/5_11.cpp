#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Book {
	char* title;
	int price;
public:
	Book(const char* title, int price) {
		this->price = price;
		this->title = new char[strlen(title)+1];
		strcpy(this->title, title);
	}
	Book(const Book& a) {
		this->title = new char[strlen(a.title)+1];
		this->price = a.price;
		strcpy(this->title, a.title);
	}
	~Book() {
		delete[] title;
	}
	void set(const char* title, int price) {
		if (this->title) {
			delete[] this->title;
		}//해제 후(반환 후)
		int len = strlen(title);
		this->title = new char[len + 1];//새로운 메모리 할당
		strcpy(this->title, title);
		this->price = price;

		}
	
	void show() {
		cout << title << ' ' << price << "원" << endl;
	}

};

int main() {
	Book cpp("명품C++", 10000);
	Book java = cpp;
	java.set("명품자바", 12000);
	cpp.show();
	java.show();

}
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
		}//���� ��(��ȯ ��)
		int len = strlen(title);
		this->title = new char[len + 1];//���ο� �޸� �Ҵ�
		strcpy(this->title, title);
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
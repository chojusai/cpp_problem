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
	Book& operator+=(int price) {
		this->price += price;
		return *this;
	}
	Book& operator-=(int price) {
		this->price -= price;
		return *this;
	}
	void show() {
		cout << name << ' ' << price << "원 " << page << ' ' << "페이지" << endl;
	 }


};
int main() {
	Book a("청춘", 20000, 300), b("미래", 30000, 500);
	a += 500;
	b -=500;
	a.show();
	b.show();

}
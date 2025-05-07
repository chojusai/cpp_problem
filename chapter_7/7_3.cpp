#include<iostream>
using namespace std;

class Book {
private:
	string name;
	int price;
	int pages;
public:
	Book(string name, int price, int pages) {
		this->name = name;
		this->price = price;
		this->pages = pages;
	}
	bool operator!() {
		if (this->price == 0) {
			return true;
		}
		else {
			return false;
		}
	}
};

int main() {
	Book book("∫≠∑ËΩ√¿Â", 0, 50);
	if (!book) cout << "∞¯¬•¥Ÿ" << endl;
}
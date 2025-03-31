#include<iostream>
using namespace std;

class Person {
	string name;
	
public:
	Person() {

	}
	Person(string name) {
		this->name = name;
	}
	string getname() {

		return name;
	}
};

class Family {
	Person* p;
	int size;
	string family_name;


public:

	Family(string name, int size) {
		p = new Person[size];
		family_name = name;
		this->size = size;
	}
	void setName(int idx, string name) {
		p[idx] = Person(name);

	}
	void show() {
		cout << family_name << "가족은 다음과 같이 " << size << "명 입니다." << endl;
		for (int i = 0; i < size; i++) {
			cout << p[i].getname()<<'\t';
		}
	}
	~Family() {
		delete[] p;
	}
};

int main() {
	Family* simpson = new Family("Simpson", 3);
	simpson->setName(0, "Mr.Simpson");
	simpson->setName(1, "Mrs.Simpon");
	simpson->setName(2, "Bart Simspn");
	simpson->show();
	delete simpson;
}
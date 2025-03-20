#include<iostream>
#include<string>
using namespace std;

class Date {
private:
	int year;
	int month;
	int day;
	
public:
	int getYear() {
		return year;
	};
	int getMonth() {
		return month;
	};
	int getDay() {
		return day;
	};
	void show();
	Date(int y,int m,int d) {
		year = y;
		month = m;
		day = d;
	}
	Date(string s) {
		year = stoi(s.substr(0,4));
		month = stoi(s.substr(5, 7));
		day = stoi(s.substr(8, 10));
	};

};
void Date::show() {
	cout << year << "³â" << month << "¿ù" << day << "ÀÏ" << '\n';
}

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}
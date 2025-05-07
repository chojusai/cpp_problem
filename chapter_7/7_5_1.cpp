#include<iostream>
using namespace std;

class Color {
	int red;
	int green;
	int blue;
public:
	
	Color(int red=0, int green=0, int blue=0) {
		this->red = red;
		this->green = green;
		this->blue = blue;
	}
	void show() {
		cout << red << ' ' << green << ' ' << blue << endl;
	}
	Color operator+(Color c) {
		Color tmp;
		tmp.red = this->red + c.red;
		tmp.green = this->green + c.green;
		tmp.blue = this->blue + c.blue;
		return tmp;
	}
	bool operator==(Color a) {
		if (this->red == a.red && this->green == a.green && this->blue == a.blue) {
			return true;
		}
		else {
			return false;
		}
	}
};

int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "보라색 맞음";
	else
		cout << "보라색 아님";
}
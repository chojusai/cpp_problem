#include<iostream>
using namespace std;

class Color {
	int red;
	int green;
	int blue;
public:

	Color(int red = 0, int green = 0, int blue = 0) {
		this->red = red;
		this->green = green;
		this->blue = blue;
	}
	void show() {
		cout << red << ' ' << green << ' ' << blue << endl;
	}
	friend Color operator+(Color color, Color c);
	friend bool operator==(Color color,Color a);
};
Color operator+(Color color,Color c){
	Color tmp;
	tmp.red = color.red + c.red;
	tmp.green = color.green + c.green;
	tmp.blue = color.blue + c.blue;
	return tmp;
}
bool operator==(Color color,Color a) {
	if (color.red == a.red && color.green == a.green && color.blue == a.blue) {
		return true;
	}
	else {
		return false;
	}
}

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
#include<iostream>
using namespace std;

class Rectangle {

public:
	int thickness;
	int width;
	int height;
	int getArea();
	int getVolume();

};
int Rectangle::getVolume() {
	return getArea() * thickness;
}
int Rectangle::getArea() {
	return width * height;
}
int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	rect.thickness = 2;
	cout << "사각형의 면적은" << rect.getArea() << endl;
	cout << "사각형의 체적은" << rect.getVolume() << endl;
}
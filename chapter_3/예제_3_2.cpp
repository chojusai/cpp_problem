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
	cout << "�簢���� ������" << rect.getArea() << endl;
	cout << "�簢���� ü����" << rect.getVolume() << endl;
}
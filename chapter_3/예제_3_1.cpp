#include<iostream>
using namespace std;

class Circle {
public:
	int radius;
	double getArea();
	double get_inner_Area();
	int innerRadius;
	int outerRadius;
};
double Circle::get_inner_Area() {
	return (3.14 *outerRadius * outerRadius)-(3.14*innerRadius*innerRadius);
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut 면적은" << area << endl;

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza 면적은" << area << endl;

	Circle donut_two;
	donut_two.innerRadius = 2;
	donut_two.outerRadius = 5;
	area = donut_two.get_inner_Area();
	cout << "donut_two 면적은" << area << endl;
}
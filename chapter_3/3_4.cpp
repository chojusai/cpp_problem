#include<iostream>
using namespace std;
class Coffemachine {
private:
	int coffe;
	int water;
	int sugar;
public:
	Coffemachine(int a, int b, int c) {
		coffe = a;
		water = b;
		sugar = c;

	}
	void drinkEspresso() {
		coffe --;
		water --;
		
	}
	void drinkAmericano() {
		coffe --;
		water --;
	}
	void drinkSugarCoffe() {
		coffe -- ;
		water --;
		sugar --;
	}
	void fill() {
		coffe = 10;
		water = 10;
		sugar = 10;
	}
	void show() {
		cout << "Ŀ�� �ӽ� ����," << "Ŀ��: " << coffe << " " << "��: " << water << ' ' << "����: " << sugar << endl;

	}
	

};
int main() {
	Coffemachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffe();
	java.show();
	java.fill();
	java.show();
}
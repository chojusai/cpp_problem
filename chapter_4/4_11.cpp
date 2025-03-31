#include<iostream>
using namespace std;

class Container {
	int size;


public:
	Container() {
		size = 10;
	}
	void fill() {
		size = 10;
	}
	void consume() {
		size=size-1;
	}
	int getSize() {
		return size;
	}
};

class CoffeeVendingMachine {
	Container tong[3];
	void fill() {
		for (int i = 0; i < 3; i++) {
			tong[i].fill();
		}
	}
	void selectEspresso() {
		if (tong[0].getSize() >= 1 && tong[1].getSize() >= 1) {
			cout << "���������� �弼��" << endl;
			tong[0].consume();
			tong[1].consume();
		}
		else {
			cout << "���ᰡ �����մϴ�." << endl;
		}
	}
	void selectAmericano() {
		if (tong[0].getSize() >= 1 && tong[1].getSize() >= 2) {
			cout << "�Ƹ޸�ī�� �弼��" << endl;
			tong[0].consume();
			tong[1].consume();
			tong[1].consume();
		}
		else {
			cout << "���ᰡ �����մϴ�." << endl;
		}
	}
	void selectSugarCoffe() {
		if (tong[0].getSize() >= 1 && tong[1].getSize() >= 1 && tong[2].getSize() >= 1) {
			cout << "����Ŀ�� �弼��" << endl;
			tong[0].consume();
			tong[1].consume();
			tong[1].consume();
			tong[2].consume();
		}
		else {
			cout << "���ᰡ �����մϴ�." << endl;
		}
	}
	void show() {
		cout << "Ŀ�� " << tong[0].getSize() << ", ";
		cout << "�� " << tong[1].getSize() << ", ";
		cout << "���� " << tong[2].getSize() << ", " << endl;
	}
public:
	void run() {
		fill();
		cout << "***** Ŀ�����Ǳ⸦ �۵��մϴ�. *****" << endl;
		int num;

		while (true) {
			cout << "�޴��� �����ּ���(1:����������, 2:�Ƹ޸�ī��, 3:����Ŀ��, 4:�ܷ�����, 5:ä���)>> ";
			cin >> num;
			switch (num) {
			case 1:
				selectEspresso();
				break;
			case 2:
				selectAmericano();
				break;
			case 3:
				selectSugarCoffe();
				break;
			case 4:
				show();
				break;
			case 5:
				fill();
				break;
			}
		}
	}
};



	int main() {
		CoffeeVendingMachine c;
		c.run();
	}
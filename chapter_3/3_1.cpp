#include<iostream>
using namespace std;

class Tower {
private:
	int high;
public:
	Tower() {
		high = 1;
	}
	Tower(int num) {
		high=num;
	}
	
	int getHeight() {
		return high;
	}

};

int main() {
	Tower myTower;
	Tower seoulTower(100);
	cout << "���̴�" << myTower.getHeight() << "����" << endl;
	cout << "���̴�" << seoulTower.getHeight() << "����" << endl;
}

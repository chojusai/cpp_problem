#include<iostream>
using namespace std;

class Board {
public:
	static string info[100];
	static int index;
	static void add(string text);
	static void print();

};

string Board::info[100] = { "" };
int Board::index = 0;


void Board::add(string text) {
	info[index] = text;
	index++;
}
void Board::print() {
	cout << "************ �Խ����Դϴ�. *************" << endl;
	for (int i = 0; i < index; i++) {
		cout << i << ": " << info[i] << endl;
	}

}

int main() {
	Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
	Board::print();
	Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
	Board::print();
}
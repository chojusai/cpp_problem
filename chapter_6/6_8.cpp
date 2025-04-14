#include<iostream>
using namespace std;

class Trace {

public:
	static string info[100][2];
	static int index;
	static void put(string tag, string text);
	static void print(string tag="");
};
string Trace::info[100][2] = { "" };
int Trace::index = 0;

void Trace::put(string tag, string text) {
	info[index][0] = tag;
	info[index][1] = text;
	index++;
}

void Trace::print(string tag) {
	if (tag == "") {
		cout << tag << "----- ��� Trace ������ ����մϴ�. -----" << endl;
		for (int i = 0; i < index; i++) {
			cout << info[i][0] << ":" << info[i][1] << endl;
		}
	}
	else {
		cout << tag << "----- �±��� Trace ������ ����մϴ�. -----" << endl;
		for (int i = 0; i < index; i++) {
			if (info[i][0] == tag) {
				
				cout << info[i][0] << ": " << info[i][1] << endl;
			}
		}
	}
}


void f() {
	int a, b, c;
	cout << "�� ���� ������ �Է��ϼ���>>";
	cin >> a >> b;
	Trace::put("f()", "������ �Է� �޾���");
	c = a + b;
	Trace::put("f()", "�� ���");
	cout << "���� " << c << endl;
}
int main() {
	Trace::put("main()", "���α׷� �����մϴ�.");

	f();
	Trace::put("main()", "����");
	Trace::print("f()");
	Trace::print();
}
#include<iostream>

using namespace std;
class Person {
	string name;
	string tel;
public:
	Person() {
		name = "";
		tel = "";
	}
	string getName() {
		return name;	
	}
	string getTel() {
		return tel;
	}
	void set(string name, string tel) {
		this->name = name;
		this->tel = tel;
	}
};
int main() {
	Person* p;
	p = new Person[3];
	string n, t;
	cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���"<<endl;
	for (int i = 0; i < 3; i++) {
		cout << "��� " << i + 1 << ">>";
		cin >> n >> t;
		(p + i)->set(n, t);
	}
	cout << "��� ����� �̸��� ";
	for (int i = 0; i < 3; i++) {
		cout<<(p + i)->getName()<<' ';
	}
	
	cout << "��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���>>";
	cin >> n;
	for (int i = 0; i < 3; i++) {
		if ((p + i)->getName() == n) {
			cout<<"��ȭ ��ȣ�� "<<(p + i)->getTel();

		}
	}
	delete[] p;
}

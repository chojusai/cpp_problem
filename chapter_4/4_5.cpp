#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
class Random {
public:
    Random() {
        srand((unsigned int)time(0));
        int n = rand();
    }
    int randompos(int max) {
        return rand() % max+1;
    }
    int randomAscii() {
        return rand()%(122-65+1)+65;//65~122
    }

  
};

int main() {
    Random r;
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)"<<endl;
	string str;
	while (true) {
		cout << ">>";
		getline(cin, str);
        if (str == "exit") {
            break;
        }
        
        int idx = r.randompos(str.length());
        str[idx] = r.randomAscii();
        cout << str<<endl;

	}

}

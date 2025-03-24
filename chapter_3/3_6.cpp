#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Random {
public:
    Random() {
        srand((unsigned int)time(0));
       
    }

    int next() {
        return (rand() / 2) * 2;
    }

    int nextInRange(int a, int b) {
        if (a % 2 != 0)a++;
        if (b % 2 != 0)b--;
        int cnt = (b - a) / 2 + 1;
        int i = rand() % cnt;
        return a+(i*2);
    }
};

int main() {
    Random r;

    cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10�� --" << endl;
    for (int i = 0; i < 10; i++) {
        cout << r.next() << ' ';
    }

    cout << endl << endl << "-- 2���� 10������ ���� ���� 10�� --" << endl;
    for (int i = 0; i < 10; i++) {
        cout << r.nextInRange(2, 10) << ' ';
    }

    cout << endl;
}

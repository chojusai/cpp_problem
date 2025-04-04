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
        if (a % 2 != 1)a++;
        if (b % 2 != 1)b--;
        int cnt = (b - a) / 2 + 1;
        int i = rand() % cnt;
        return a + (i * 2);
    }
};

int main() {
    Random r;

    cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개 --" << endl;
    for (int i = 0; i < 10; i++) {
        cout << r.next() << ' ';
    }

    cout << endl << endl << "-- 2에서 10까지의 랜덤 정수 10개 --" << endl;
    for (int i = 0; i < 10; i++) {
        cout << r.nextInRange(2, 10) << ' ';
    }

    cout << endl;
}

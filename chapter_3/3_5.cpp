#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Random {
public:
    Random() {
        srand((unsigned int)time(0)); 
        int n = rand();
    }

    int next() {
        return rand(); 
    }

    int nextInRange(int a, int b) {
        return rand() % (b - a + 1) + a; 
    }
};

int main() {
    Random r;

    cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개 --" << endl;
    for (int i = 0; i < 10; i++) {
        cout << r.next() << ' ';
    }

    cout << endl << endl << "-- 2에서 4까지의 랜덤 정수 10개 --" << endl;
    for (int i = 0; i < 10; i++) {
        cout << r.nextInRange(2, 4) << ' ';
    }

    cout << endl;
}

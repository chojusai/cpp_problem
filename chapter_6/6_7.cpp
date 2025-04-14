#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class Random {
public:
	static void seed() {
		srand((unsigned)time(0));
	}
	static int nextInt(int min = 0, int max = 32767);
	static char nextAlphabet();
	static double nextDouble();
};
int Random::nextInt(int min, int max) {
	cout << min << "에서 " << max << "까지 랜덤한 정수 10개를 출력합니다." << endl;
	int result;
	for (int i = 0; i < 10; i++) {
		result= rand() % (max - min + 1)+min;
		cout << result<<' ';
	}
	cout << endl;
	return result;
}
char Random::nextAlphabet() {
	cout << "알파벳을 랜덤하게 10개를 출력합니다." << endl;
	char result;
	for (int i = 0; i < 10; i++) {
		if (rand() % 2 == 0) {
			result = rand() % ('Z'-'A')+'A';
		}
		else {
			result = rand() % ('z'-'a')+'a';
		}
		
		cout << result << ' ';
	}
	cout << endl;
	return result;
}
double Random::nextDouble() {
	cout << "랜덤한 실수를 10개를 출력합니다." << endl;
	double result;
	for (int i = 0; i < 10; i++) {
		result = (double)rand() / RAND_MAX;
		cout << result << ' ';
	}
	return result;

}
	
int main() {
	Random r;
	r.nextInt(1, 100);
	r.nextAlphabet();
	r.nextDouble();
}
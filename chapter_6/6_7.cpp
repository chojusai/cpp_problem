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
	cout << min << "���� " << max << "���� ������ ���� 10���� ����մϴ�." << endl;
	int result;
	for (int i = 0; i < 10; i++) {
		result= rand() % (max - min + 1)+min;
		cout << result<<' ';
	}
	cout << endl;
	return result;
}
char Random::nextAlphabet() {
	cout << "���ĺ��� �����ϰ� 10���� ����մϴ�." << endl;
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
	cout << "������ �Ǽ��� 10���� ����մϴ�." << endl;
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
#include <iostream>
#include <string>
#include <cctype>  // isalpha()
using namespace std;

class Histogram {
	string str;
	int alphabet[26] = { 0 };

public:
	Histogram(string str) {
		this->str = str;
	}
	void put(string str) {
		this->str += str;
	}
	void putc(char ch) {
		this->str += ch;
	}
	void print() {
		cout << str << endl << endl;
		size_alphabet();
		cnt_alphabet();
		print_star();
	}
	void size_alphabet() {
		int cnt = 0;
		for (int i = 0; i < str.length(); i++) {
			if (isalpha(str[i])) cnt++;
		}
		cout << "ÃÑ ¾ËÆÄºª ¼ö " << cnt << endl;
	}
	void cnt_alphabet() {
		for (int i = 0; i < 26; i++) alphabet[i] = 0;

		for (char ch : str) {
			if (ch >= 'A' && ch <= 'Z') {
				alphabet[ch - 'A']++;
			}
			else if (ch >= 'a' && ch <= 'z') {
				alphabet[ch - 'a']++;
			}
		}
	}
	void print_star() {
		for (int i = 0; i < 26; i++) {
			cout << (char)('a' + i) << " (" << alphabet[i] << ")\t: ";
			for (int j = 0; j < alphabet[i]; j++) {
				cout << "*";
			}
			cout << endl;
		}
	}
};

int main() {
	Histogram elvisHisto("wise men say, only fools rush in But I can't help");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
}

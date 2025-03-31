#include<iostream>
#include<string>
#include<ctime>

using namespace std;

class Player {
	string name;
	int card[3];
public:
	Player() {

	};
	Player(string name) {
		this->name = name;
	}
	string getname() {
		return name;
	}
	
	bool card_random() {
		srand((unsigned int)time(0));
		cout << '\t' << '\t';
		for (int i = 0; i < 3; i++) {
			card[i] = rand() % 3;
			cout << card[i] << '\t';
			
		}
		for (int i = 0; i < 2; i++) {
			if (card[i] != card[i + 1]) {
				return false;
			}
			
		}
		return true;
		
		
		
	}

};
class GamlingGame {
	Player player[2];
	bool victory = false;
	string name;
	string enter;
public:
	void play() {
		cout << "***** 겜블링 게임을 시작합니다. *****" << endl;
		cout << "첫번째 선수 이름>>";
		cin >> name;
		player[0] = Player(name);
		cout << "두번째 선수 이름>>";
		cin >> name;
		player[1] = Player(name);
		getchar();
	}
	void game() {
		int i = 0;
		while (!victory) {
			cout << player[i % 2].getname() << ":<Enter>";
			getchar();
			if (player[i % 2].card_random()) {
				victory = true;
				cout << player[i % 2].getname() << "님 승리!!"<<endl;
			}
			else {
				cout << "아쉽군요!" << endl;
			}
			i++;
		}
	}
		
};


int main() {
	
	GamlingGame g;
	g.play();
	g.game();
	
}
#include <iostream>
#include <string>
using namespace std;
string name;

class Player {
public:
	int lives = 3;

	int loseHitpoint(int damageTaken) {
		lives = lives - damageTaken;
		if (lives == 0) {
			cout << "THREE IN A ROW WRONG. YOU'RE GARBAGE" << endl;
			system("pause");
		}
		else {
			return lives;
		}
	}
};




int main() {

	cout << "quiz master - william macleod\n";
	cout << "enter name: ";
	cin >> name;
	cout << "welcome " << name << endl;


	Player player;
	player.loseHitpoint(1);
	cout << "you have " << player.lives << " lives left." << endl;
	player.loseHitpoint(1);
	cout << "you have " << player.lives << " lives left." << endl;
	player.loseHitpoint(1);


	system("pause");
}
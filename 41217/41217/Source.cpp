#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char player;
char cpu;

void Computer();

int main() {

	cout << "Welcome to Rock (r), Paper (p), Scissors (s), Lizard (l), Spock (k)!" << endl;

	srand(time(NULL));
	while (true) {

		cout << "READY TO PLAY" << endl;
		cout << "Player 1: ";
		cin >> player;
		Computer();
		if (player == 'r' && cpu == 's')
			cout << "Rock beats Scissors!  Player 1 wins!" << endl;
		else if (player == 'r' && cpu == 'l')
			cout << "Rock beats Lizard!  Player 1 wins!" << endl;
		else if (player == 'r' && cpu == 's')
			cout << "Spock beats Rock!  CPU wins!" << endl;
		else if (player == 'r' && cpu == 'p')
			cout << "Paper beats Rock!  CPU wins!" << endl;
		else if (player == 'r' && cpu == 'r')
			cout << " Rock ties Rock.  Nobody wins!" << endl;
		else if (player == 'p' && cpu == 'r')
			cout << "Paper beats Rock!  Player 1 wins!" << endl;
		else if (player == 'p' && cpu == 's')
			cout << "Scissors beat Paper!  CPU wins!" << endl;
		else if (player == 'p' && cpu == 'k')
			cout << "Paper beats Spock!  Player 1 wins!" << endl;
		else if (player == 'p' && cpu == 'l')
			cout << "Lizard beats Paper!  CPU wins!" << endl;
		else if (player == 'p' && cpu == 'p')
			cout << "Paper ties Paper!  Nobody wins!" << endl;
		else if (player == 's' && cpu == 'r')
			cout << "Rock beat Scissors! CPU wins!" << endl;
		else if (player == 's'&& cpu == 'p')
			cout << "Scissors beat Paper!  Player 1 wins!" << endl;
		else if (player == 's' && cpu == 'l')
			cout << "Scissors beat Lizard!  Player 1 wins!" << endl;
		else if (player == 's' && cpu == 'k')
			cout << "Spock beats Scissors!  CPU wins!" << endl;
		else if (player == 's' && cpu == 's')
			cout << "Spock ties Spock!  Nobody wins!" << endl;
		else if (player == 'l' && cpu == 'r')
			cout << "Rock beats Lizard!  CPU wins!" << endl;
		else if (player == 'l' && cpu == 'p')
			cout << "Lizard beats Paper!  Player 1 wins!" << endl;
		else if (player == 'l' && cpu == 's')
			cout << "Scissors beat Lizard!  CPU wins!" << endl;
		else if (player == 'l' && cpu == 'k')
			cout << "Lizard beats Spock!  Player 1 wins!" << endl;
		else if (player == 'l' && cpu == 'l')
			cout << "Lizard ties Lizard!  Nobody wins!" << endl;
		else if (player == 'k' && cpu == 'r')
			cout << "Spock beats Rock!  Player 1 wins!" << endl;
		else if (player == 'k' && cpu == 'p')
			cout << "Paper beats Spock!  CPU wins!" << endl;
		else if (player == 'k' && cpu== 's')
			cout << "Spock beats Scissors!  Player 1 wins!" << endl;
		else if (player == 'k' && cpu == 'l')
			cout << "Lizard beats Spock!  CPU wins!" << endl;
		else if (player == 'k' && cpu == 'k')
			cout << "Spock ties Spock!  Nobody wins!" << endl;
		else
			cout << "tie" << endl;
	}
}

void Computer() {
	int num = rand() % 100 + 1;
	if (num <= 20) {
		cout << "CPU: Rock" << endl;
		cpu = 'r';
	}
	else if (num > 21 && num <= 40) {
		cout << "CPU: Paper" << endl;
		cpu = 'p';
	}
	else if (num > 41 && num <= 60) {
		cout << "CPU: Scissors" << endl;
		cpu = 's';
	}
	else if (num > 61 && num <= 80) {
		cout << "CPU: Lizard" << endl;
		cpu = 'l';
	}
	else {
		cout << "CPU: Spock" << endl;
		cpu = 'k';
	}
}
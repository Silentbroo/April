#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
void Badguy();
int main() {
	srand(static_cast<unsigned int>(time(0)));
	while (1) {
		Badguy();
		system("Pause");
	}
}
void Badguy() {
	int color = rand() % 100 + 1;
	if (color > 24)
		system("color 1A");
	system("pause");
	if (color < 26)
		system("color 2B");
	system("pause");
	if(color < 50)
		system("color 4D");
	system("pause");
}


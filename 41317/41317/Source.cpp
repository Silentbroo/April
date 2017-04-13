#include <iostream>
#include <string>
using namespace std;
int main() {
	int room = 1;
	string input;
	string item[4];
	int Inventory();
	while (input != "quit") {
		switch (room) {
		case 1:
			system("Color 5D");
			cout << "You are in the safe room " << endl;
			cout << "you can now go East" << endl;
			if (item[1].compare("sword") != 0)//if there's NO flashlight in their items
				cout << "you see a magic sword on the floor" << endl; 
			cin >> input;
			if (input.compare("east") == 0 || input.compare("go east") == 0)
				room = 2;
			if (input.compare("sword") == 0) {
				item[1] = "sword"; //put in inventory
				cout << "You grabbed the magic sword" << endl;
			}

		

			break;
		case 2:
			cout << "Do you have the stuff" << endl;
			cout << "Mhmmm.................................." << endl;
			{
				if (item[1].compare("sword") == 0) {
					cout << "You Win!!-" << endl;
					room = 2;
				}
				else
					cout << "you die!!! Gimme Gimme!" << endl;
				input = "quit";
			}
		}
	}
}





			

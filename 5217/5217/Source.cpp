#include <iostream>
using namespace std;
#include <string>
int main() {
	string food[7];
	food[0] = "PHO";
	food[1] = "Steak";
	food[2] = "spring roll";
	food[3] = "Rice";
	food[4] = "Chicken";
	food[5] = "tacos";
	food[6] = "bacon hot dog";
	for (int i = 0; i < 7; i++)
		cout << food[i] << endl;
}
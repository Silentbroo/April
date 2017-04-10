#include <iostream>
using namespace std;
int main() {
	double num;
	char letter;

	cout << "Gimmi a number" << endl;
	cin >> num;
	cout << "Gimmi a letter" << endl;

	if (letter == 'c') {
		cout << "in F, this is" <<1.8*(num)+32 << endl;
		cout << "in k, this is" <<num+273 << endl;
	}
	if (letter == 'f') {
		cout << "in C, this is" << num-32*0.556 << endl;
		cout << "in k, this is" << num-32*0.556+273.15 << endl;
	}
	if (letter == 'k') {
		cout << "in C, this is" << num-273.15<< endl;
		cout << "in F, this is" << (num-273.15)*1.8+32 << endl;
	}
	if (num < 212)
		cout << "pant,pant,pant" << endl;
	if (num < 32)
		cout << "Brrrrrrrrr" << endl;
	else
		cout << "You are a fugitive from the law of averages" << endl;
}
#include <iostream>
using namespace std;
int main() {
	char letters;
	char answer;
	int question = 1;
	int cooking = 0;
	int Naruto = 0;
	int call = 0;
	int smash = 0;
	cout << "Which princess are you?" << endl;


	////////question 1/////////////////////////////
	cout << "What do you like to do in your free time?" << endl;
	cout << "r=read a book, s=sleep,l=listen to music,p=practice" << endl;
	cin >> answer;
	if (answer == 'r')
		call = call + 1;
	else if (answer == 's')
		cooking = cooking + 1;
	else if (answer == 'l')
		smash = smash + 1;
	else if (answer = 'p')
		Naruto = Naruto + 1;
	else
		cout << "invaild input" << endl;

	//question 2/////////////////

	cout << "What’s your favorite food?" << endl;
	cout << "f=fruits, v=vegis, c=chicken, n=noddles" << endl;
	cin >> answer;
	if (answer == 'f')
		call = call + 1;
	else if (answer == 'v')
		cooking = cooking + 1;
	else if (answer == 'c')
		smash = smash + 1;
	else if (answer = 'n')
		Naruto = Naruto + 1;
	else
		cout << "invaild input" << endl;

	////// question3/////////

	cout << "What pet would you like to have as a pet" << endl;
	cout << "t=tiger,c=cat,f=frog,d=dragon" << endl;
	cin >> answer;
	if (answer == 't')
		call = call + 1;
	else if (answer == 'c')
		cooking = cooking + 1;
	else if (answer == 'f')
		smash = smash + 1;
	else if (answer = 'd')
		Naruto = Naruto + 1;
	else

		cout << "invaild input" << endl;


	if ((cooking > Naruto) && (cooking > call) && (cooking > smash))
		cout << "you should play cooking mama!!!" << endl;
	else if ((Naruto > cooking) && (Naruto > call) && (Naruto > smash))
		cout << "you should play Naruto !!!" << endl;
	else if ((call > cooking) && (call > Naruto) && (call > smash))
		cout << "you should play call of duty!!!" << endl;
	else if ((smash > cooking) && (smash > call) && (smash > Naruto))
		cout << "you should play smash bros!!!" << endl;
}
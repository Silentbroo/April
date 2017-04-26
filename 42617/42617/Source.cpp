#include <iostream>
using namespace std;

bool Horoscope(int num);

int main() {
	int input = 2;
	cout << "What sign are you 1 Aries - 12 Pisces" << endl;
	cin >> input;

	if (Horoscope(input) == true)
		cout << "Happy Birthday Month" << endl;
}
bool Horoscope(int num) {
	switch (num) {
	case 1:
		cout << "You are an Aries (March 21 -April 19)" << endl;
		break;
	case 2:
		cout << "you are taurus (April 20 -May 20)" << endl;
		return 1;
		break;

	case 3:
		cout << "you are gemini (May 21 -June 20)" << endl;
		break;
	case 4:
		cout << "you are cancer (June 21 - July 22)" << endl;
		break;
	case 5:
		cout << "you are leo (July 23 - August 22)" << endl;
		break;
	case 6:
		cout << "you are Virgo (August 23 - September 22)" << endl;
		break;
	case 7:
		cout << "you are libra (September 23 -October 22)" << endl;
		break;
	case 8:
		cout << "you are scorpio (October 23 - November 21)" << endl;
		break;
	case 9:
		cout << "you are Sagittarius  (November 23 - December 21)" << endl;
		break;
	case 10:
		cout << "you are Capricorn (December 22 - January 19)" << endl;
		break;
	case 11:
		cout << "you are Pisces (January 20 -February 18)" << endl;
		break;
	case 12:
		cout << "you are Aquarius (February 19 - March 20) " << endl;
		break;
	}


}
#include <iostream>   // For cin, cout, etc.
#include <cstdlib>
#include <ctime>
#include <math.h> 
using namespace std;  // For standard namespace 

int main() {
	int RandomNumber;
	RandomNumber = rand();
	int num1;
	int num2;
	int x = 0;
	int y = 0;

	for (int i = 0; i < 10; i++)
		x = rand() % 20 - 1;
	cout << "the first point x is " << x << endl;
	y = rand() % 20 - 1;
	cout << "the fist point y is " << y << endl;
	cout << "can i have the first number?" << endl;
	cin >> num1;//x
	cout << "can i have the second number? " << endl;
	cin >> num2;//y
	sqrt((num1 - x)*(num1 - x) + (num2 - y)*(num2 - y));



	// PART II INSERT YOUR CODE ABOVE HERE
	// PART III INSERT YOUR CODE BELOW HERE




	// PART III INSERT YOUR CODE ABOVE HERE

	return 0; // signals the operating system that our program ended OK.
}

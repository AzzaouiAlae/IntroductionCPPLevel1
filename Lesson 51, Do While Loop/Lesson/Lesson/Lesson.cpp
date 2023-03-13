#include <iostream>

using namespace std;

short ReadNumberInRange(short From, short To)
{
	short Number;
	do {
		cout << "Please enter a number : ";
		cin >> Number;
	} while (Number < From || Number > To);
	return Number;
}

int main()
{
	cout << "\nYour Number is : " << ReadNumberInRange(1, 10) << endl;
}
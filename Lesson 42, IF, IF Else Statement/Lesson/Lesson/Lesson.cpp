#include <iostream>

using namespace std;

int main()
{
	int x = 10;
	if (x >= 5 && x <= 20)
	{
		cout << "The code of if body has executed.\n" << endl;
	}
	cout << "The code after if body always executed\n\n";

	cout << "Please enter your number : ";
	cin >> x;

	if (x > 5)
		cout << "Yes, X is grator than 5 \n";
	else
		cout << "No, X is less than 5 \n";
}
#include <iostream>

using namespace std;

int main()
{
	int time = 22;
	if (time < 10)
		cout << "Good Morning." << endl;
	else if (time < 20)
		cout << "Good Day.\n" << endl;
	else
		cout << "Good evening.\n";
}

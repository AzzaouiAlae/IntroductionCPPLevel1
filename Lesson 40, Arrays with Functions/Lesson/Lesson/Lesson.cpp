#include <iostream>

using namespace std;

void ReadArrayData(int x[3])
{
	cout << "Please enter number1 :";
	cin >> x[0];

	cout << "Please enter number2 :";
	cin >> x[1];

	cout << "Please enter number3 :";
	cin >> x[2];
}

void PrintArrayData(int x[3])
{
	cout << "*********************************\n";
	cout << x[0] << endl;
	cout << x[1] << endl;
	cout << x[2] << endl;
}

int main()
{
    int x[3];
    ReadArrayData(x);
    PrintArrayData(x);
}
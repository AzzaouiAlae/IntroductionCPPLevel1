#include <iostream>

using namespace std;

int main()
{
    double distance = 56E12; // is equal to 560 000 000 000 000
    cout << distance << endl;

    short d = 3434233; // Error! out of range or 26361
    cout << d << endl;

    unsigned int a = -10; // Error! can only store positive number or 4294967286
    cout << a << endl;

    cout << "The size of bool data type is " << sizeof(bool) << "\n";
    cout << "The size of char data type is " << sizeof(char) << "\n";
    cout << "The size of short data type is " << sizeof(short int) << "\n";
    cout << "The size of int data type is " << sizeof(int) << "\n";

    cout << "The size of long data type is " << sizeof(long) << "\n";
    cout << "The size of long long data type is " << sizeof(long long) << "\n";

    cout << "The size of float data type is " << sizeof(float) << "\n";
    cout << "The size of double data type is " << sizeof(double) << "\n";
}
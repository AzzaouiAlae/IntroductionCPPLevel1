#include <iostream>

using namespace std;

int main()
{
    short MyAge = 27;
    cout << MyAge << endl;

    short myAge;
    myAge = 27;
    cout << myAge << endl;

    myAge = 28;
    cout << myAge << endl;

    cout << "I am " << myAge << " years old.\n";
    cout << "\n______________________________\n";
    short MyNumber = 52;
    float myFloat = 7.84;
    double myDoubleNumber = 21.89822;
    char myLetter = 'M';
    string myText = "Alae";
    bool myBoolean = true;

    cout << MyNumber << endl;
    cout << myFloat << endl;
    cout << myDoubleNumber << endl;
    cout << myLetter << endl;
    cout << myText << endl;
    cout << myBoolean << endl;
    cout << "\n______________________________\n";

    short x = 4;
    short y = 10;
    short sum = x + y;
    cout << sum << endl; // output : 14;

    short X = 4, Y = 10, Sum = X + Y;
    cout << Sum << endl; // output : 14;

    short a = 4;
    short b = 10;
    cout << a + b << endl; // output : 14;

    short c = 2, d = 4, z = 50;
    cout << c + d + z << endl; // output : 56;
    cout << "\n______________________________\n";

    char char1 = 'A', char2 = 'B', char3 = 'C';
    cout << char1 << char2 << char3 << " Reversed is " << char3 << char2 << char1 << endl;
    cout << "\n______________________________\n";

    //Good
    short MinutesPerHour = 60;

    //Ok, but no so easy to understand what m actually is
    short m = 60;

    const short myNum = 15; // myNum will always be 15

    const short minutesPerHour = 60;
    cout << minutesPerHour << endl;

    const float PI = 3.14;
    cout << PI << endl;
}
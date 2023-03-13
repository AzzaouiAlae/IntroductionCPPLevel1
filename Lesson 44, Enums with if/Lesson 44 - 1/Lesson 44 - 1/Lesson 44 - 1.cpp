#include <iostream>

using namespace std;

enum enScreenColor { Red = 1, Blue = 2, Green = 3, Yellow = 4 };

void ColorProc()
{
    cout << "*******************************\n";
    cout << "Please chose the number of your color.\n";
    cout << "1) Red\n";
    cout << "2) Blue\n";
    cout << "3) Green\n";
    cout << "4) Yellow\n";
    cout << "Your choice is : ";
    int Color;
    cin >> Color;

    if (Color == Red) system("Color 4F");
    else if (Color == Blue) system("Color 1F");
    else if (Color == Green) system("Color 2F");
    else if (Color == Yellow) system("Color 6F");
    else  system("Color 9F");


}

int main()
{
    ColorProc();
}
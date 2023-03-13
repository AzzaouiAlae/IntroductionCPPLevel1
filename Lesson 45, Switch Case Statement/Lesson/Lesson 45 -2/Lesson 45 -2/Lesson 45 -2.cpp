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

    switch (Color)
    {
    case Red: system("Color 4F"); break;
    case Blue: system("Color 1F"); break;
    case Green: system("Color 2F"); break;
    case Yellow: system("Color 6F"); break;
    default:system("Color 9F"); break;
    }
}

int main()
{
    ColorProc();
}

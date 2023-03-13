#include <iostream>

using namespace std;

enum enCountryChoise { Morocco = 1, Jordan = 2, Tunisa = 3, Algeria = 4, Oman = 5, Egypt = 6, Iraq = 7, Other = 8 };

void CountryChoise()
{
    cout << "****************************************\n";
    cout << "Please enter the number of your country.\n";
    cout << "1) Morocoo\n";
    cout << "2) Jordan\n";
    cout << "3) Tunisa\n";
    cout << "4) Algeria\n";
    cout << "5) Oman\n";
    cout << "6) Egypt\n";
    cout << "7) Iraq\n";
    cout << "8) Other\n";
    cout << "****************************************\n";
    cout << "Your Choise is : ";
    int Country;
    cin >> Country;

    switch (Country)
    {
    case Morocco: cout << "Your Country is : Morocco\n"; break;
    case Jordan: cout << "Your Country is : Jordan\n"; break;
    case Tunisa: cout << "Your Country is : Tunisa\n"; break;
    case Algeria: cout << "Your Country is : Algeria\n"; break;
    case Oman: cout << "Your Country is : Oman\n"; break;
    case Egypt: cout << "Your Country is : Egypt\n"; break;
    case Iraq: cout << "Your Country is : Iraq\n"; break;
    case Other: cout << "Your Country is : Other\n"; break;
    default: cout << "Wrong!\n"; break;
    }

}

int main()
{
    CountryChoise();
}
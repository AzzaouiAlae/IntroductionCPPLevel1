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

    if (Country == Morocco)
        cout << "Your Country is : Morocco\n";
    else if (Country == Jordan)
        cout << "Your Country is : Jordan\n";
    else if (Country == Tunisa)
        cout << "Your Country is : Tunisa\n";
    else if (Country == Algeria)
        cout << "Your Country is : Algeria\n";
    else if (Country == Oman)
        cout << "Your Country is : Oman\n";
    else if (Country == Egypt)
        cout << "Your Country is : Egypt\n";
    else if (Country == Iraq)
        cout << "Your Country is : Iraq\n";
    else if (Country == Other)
        cout << "Your Country is : Other\n";
    else
        cout << "Wrong Number\n";
}

int main()
{
    CountryChoise();
}
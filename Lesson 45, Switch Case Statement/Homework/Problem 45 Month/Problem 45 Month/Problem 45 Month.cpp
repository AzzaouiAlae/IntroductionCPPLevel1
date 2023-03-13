#include <iostream>
#include <string>
using namespace std;

enum enMonth { Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, Jun = 6, July = 7, Aug = 8, Sep = 9, Oct = 10, Nov = 11, Dec = 12 };

void ShowMenuMonth()
{
    cout << "******************************\n";
    cout << "      Month Of the year       \n";
    cout << "******************************\n";
    cout << "1) Januarary\n";
    cout << "2) Febrary\n";
    cout << "3) Mareh\n";
    cout << "4) April\n";
    cout << "5) May\n";
    cout << "6) June\n";
    cout << "7) July\n";
    cout << "8) August\n";
    cout << "9) September\n";
    cout << "10) Octobre\n";
    cout << "11) Novrmber\n";
    cout << "12) December\n";
    cout << "Enter Number of Month : ";
}

string MonthNumTest(short MonthNum)
{
    switch (MonthNum)
    {
    case Jan: return "The Month is : Januarary\n"; break;
    case Feb: return "The Month is : Febrary\n"; break;
    case Mar: return "The Month is : Mareh\n"; break;
    case Apr: return "The Month is : April\n"; break;
    case May: return "The Month is : May\n"; break;
    case Jun: return "The Month is : June\n"; break;
    case July: return "The Month is : July\n"; break;
    case Aug: return "The Month is : August\n"; break;
    case Sep: return "The Month is : September\n"; break;
    case Oct: return "The Month is : Octobre\n"; break;
    case Nov: return "The Month is : Novrmber\n"; break;
    case Dec: return "The Month is : December\n"; break;
    default: return "Wrong!\n"; break;
    }
}

short ReadMonthNum()
{
    short monthNum;
    cin >> monthNum;
    return monthNum;
}

int main()
{
    ShowMenuMonth();
    cout << "------------------------------\n"
        << MonthNumTest(ReadMonthNum())
        << "------------------------------\n";
}
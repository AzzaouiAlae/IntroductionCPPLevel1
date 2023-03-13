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
    if (MonthNum > 12 || MonthNum < 1)
        return "Wrong!\n";
    else if (MonthNum == Jan)
        return "The Month is : Januarary\n";
    else if (MonthNum == Feb)
        return "The Month is : Febrary\n";
    else if (MonthNum == Mar)
        return "The Month is : Mareh\n";
    else if (MonthNum == Apr)
        return "The Month is : April\n";
    else if (MonthNum == May)
        return "The Month is : May\n";
    else if (MonthNum == Jun)
        return "The Month is : June\n";
    else if (MonthNum == July)
        return "The Month is : July\n";
    else if (MonthNum == Aug)
        return "The Month is : August\n";
    else if (MonthNum == Sep)
        return "The Month is : September\n";
    else if (MonthNum == Oct)
        return "The Month is : Octobre\n";
    else if (MonthNum == Nov)
        return "The Month is : Novrmber\n";
    else if (MonthNum == Dec)
        return "The Month is : December\n";
    else
        return "";    
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
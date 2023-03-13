#include <iostream>

using namespace std;

enum enDaysWeek { Monday = 1, Tuesday = 2, Wednesday = 3, Thursday = 4, Friday = 5, Saturday = 6, Sunday = 7 };

void ShowWeekDays()
{
    cout << "******************************\n";
    cout << "       Days of the week       \n";
    cout << "******************************\n";
    cout << "1: Monday\n";
    cout << "2: Tuesday\n";
    cout << "3: Wednesday\n";
    cout << "4: Thursday\n";
    cout << "5: Friday\n";
    cout << "6: Saturday\n";
    cout << "7: Sunday\n";
    cout << "******************************\n";
    cout << "Please enter the number of the day : ";
}

enDaysWeek ReadDay()
{
    int day;
    cin >> day;

    return (enDaysWeek)day;
}

string GetDayWeek(enDaysWeek Day)
{
    switch (Day)
    {
    case Monday: return "The day is : Monday\n";
    case Tuesday: return "The day is : Tuesday\n";
    case Wednesday: return "The day is : Wednesday\n";
    case Thursday: return "The day is : Thursday\n";
    case Friday: return "The day is : Friday\n";
    case Saturday: return "The day is : Saturday\n";
    case Sunday: return "The day is : Sunday\n";
    default: return "Wrong!\n";
    }
}

int main()
{
    ShowWeekDays();
    cout << GetDayWeek(ReadDay());
}
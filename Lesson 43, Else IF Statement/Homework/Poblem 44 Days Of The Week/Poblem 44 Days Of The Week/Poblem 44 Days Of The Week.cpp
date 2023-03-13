#include <iostream>

using namespace std;

enum enDaysOfTheWeek { Man = 1, Tus = 2, Wednes = 3, Thurs = 4, Fri = 5, satur = 6, sun = 7 };

string ToDayIs(int dayNum)
{
    if (dayNum == Man)
        return "ToDay is : Manday\n";
    else if (dayNum == Tus)
        return "ToDay is : Tusday\n";
    else if (dayNum == Wednes)
        return "ToDay is : Wednesday\n";
    else if (dayNum == Thurs)
        return "ToDay is : Thursday\n";
    else if (dayNum == Fri)
        return "ToDay is : Friday\n";
    else if (dayNum == satur)
        return "ToDay is : saturday\n";
    else if (dayNum == sun)
        return "ToDay is : sunday\n";
    else
        return "Wrong!\n";
}
void daysOfTheWeek()
{
    int dayNum;
    cout << "enter the number of the day (1 to 7) : ";
    cin >> dayNum;

    cout << ToDayIs(dayNum);
}

int main()
{
    while (true)
        daysOfTheWeek();
}
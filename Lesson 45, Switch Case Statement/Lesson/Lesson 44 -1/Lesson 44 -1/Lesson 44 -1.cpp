#include <iostream>

using namespace std;

enum enDaysOfTheWeek { Man = 1, Tus = 2, Wednes = 3, Thurs = 4, Fri = 5, satur = 6, sun = 7 };

string ToDayIs(int dayNum)
{
    switch (dayNum)
    {
    case Man: return "ToDay is : Manday\n"; break;
    case Tus: return "ToDay is : Tusday\n"; break;
    case Wednes: return "ToDay is : Wednesday\n"; break;
    case Thurs: return "ToDay is : Thursday\n"; break;
    case Fri: return "ToDay is : Friday\n"; break;
    case satur: return "ToDay is : saturday\n"; break;
    case sun: return "ToDay is : sunday\n"; break;
    default: return "Wrong!\n";
    }
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
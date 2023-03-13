#include <iostream>

using namespace std;

int toSecendsCalc(int days, int hours, int minits, int seconds)
{
    return (days * 24 * 60 * 60) + (hours * 60 * 60) + (minits * 60) + seconds;
}

void toSecends()
{
    int days, hours, minits, seconds;
    cout << "Task Duration in secends\n";
    cout << "---------------------------\n";

    cout << "Days : ";
    cin >> days;

    cout << "Hours : ";
    cin >> hours;

    cout << "Minits : ";
    cin >> minits;

    cout << "Seconds : ";
    cin >> seconds;

    cout << "---------------------------\n";
    cout << toSecendsCalc(days, hours, minits, seconds) << " Seconds" << endl;
}

int main()
{
    toSecends();
}
#include <iostream>
#include <string>
using namespace std;

string toDaysCalc(int secends)
{
    int secondsOfDays = 24 * 60 * 60, secondsOfHour = 60 * 60, secondsOfMinits = 60;
    int numberOfDays = floor(secends / secondsOfDays);
    int remaider = secends % secondsOfDays;
    int numberOfHour = floor(remaider / secondsOfHour);
    remaider = secends % secondsOfHour;
    int numberOfMinits = floor(remaider / secondsOfMinits);
    remaider = secends % secondsOfMinits;

    return to_string(numberOfDays) + " " + to_string(numberOfHour) + ":" + to_string(numberOfMinits) + ":" + to_string(remaider);
}

void toDays()
{
    int secends;
    cout << "Seconds to days hour and minits\n";
    cout << "-------------------------------------\n";
    cout << "Please enter secends : ";
    cin >> secends;
    cout << "-------------------------------------\n";
    cout << toDaysCalc(secends);
}

int main()
{
    toDays();
}
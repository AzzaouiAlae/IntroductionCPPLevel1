#include <iostream>
#include <string>

using namespace std;
float read(string Out, float num = -1)
{
    if (num == -1)
    {
        cout << "Plese Enter " << Out << " : ";
        cin >> num;
    }
    else
        cout << "Plese Enter " << Out << " : " << num;
    return num;
}

string ToDays(int TotalSecends)
{
    int secendPerDay = 24 * 60 * 60, secendPerHour = 60 * 60, secendPerMinites = 60;
    int NumberOfDays = floor(TotalSecends / secendPerDay);
    int remainder = (TotalSecends % secendPerDay);
    int NumberOfHour = floor(remainder / secendPerHour);
    remainder = remainder % secendPerHour;
    int NumberOfMinites = floor(remainder / secendPerMinites);
    remainder = remainder % secendPerMinites;
    int NumberOfSecend = remainder;
    string Total = to_string(NumberOfDays) + " " + to_string(NumberOfHour) + ":" + to_string(NumberOfMinites) + ":" + to_string(NumberOfSecend);
    return Total;
}
void toDays()
{
    cout << ToDays(read("secend"));
}
int main()
{
    toDays();
}
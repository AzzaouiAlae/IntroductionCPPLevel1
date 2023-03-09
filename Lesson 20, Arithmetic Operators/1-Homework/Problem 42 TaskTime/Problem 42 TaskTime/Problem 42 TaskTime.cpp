#include <iostream>
using namespace std;

float Read(string Out, float Num = -1)
{
    if (Num == -1)
    {
        cout << "Plese enter " << Out << " : ";
        cin >> Num;
    }
    else
    {
        cout << "Plese enter " << Out << " : " << Num << endl;
    }
    return Num;
}

float SecCalculator(float Seconds, float Minuts, float Hours, float Days)
{
    float TotalSec = Seconds + (Minuts * 60) + (Hours * 60 * 60) + (Days * 24 * 60 * 60);
    return TotalSec;
}
void TaskDuration()
{
    float Total = SecCalculator(Read("Seconds"), Read("Minuts"), Read("Hours"), Read("Days"));
    cout << "The Task Takes " << Total << " Seconds\n";
}
int main()
{
    TaskDuration();
}
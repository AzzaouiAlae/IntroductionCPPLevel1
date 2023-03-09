#include <iostream>
using namespace std;

float Read(string Out, float Num = -1)
{
    if (Num == -1)
    {
        cout << "Plese Enter " << Out << " : ";
        cin >> Num;
    }
    else
    {
        cout << "Plese Enter " << Out << " : " << Num;
    }
    return Num;
}

float Calculator(float Pennies, float Nicker, float Dime, float Quarter, float Dollar)
{
    float total = Pennies + Nicker * 5 + Dime * 10 + Quarter * 25 + Dollar * 100;
    return total;
}

void TotalPenniesDollars()
{
    float Total = Calculator(Read("Pennies"), Read("Nicker"), Read("Dime"), Read("Quarter"), Read("Dollar"));
    cout << "--------------------------\n";
    cout << "Total Pennies = " << Total << endl;
    cout << "Total Dollars = " << Total / 100 << endl;
}
int main()
{
    TotalPenniesDollars();
}
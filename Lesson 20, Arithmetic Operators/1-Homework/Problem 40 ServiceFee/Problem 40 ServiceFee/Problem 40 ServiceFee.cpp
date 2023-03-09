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
        cout << "Plese enter " << Out << " : " << Num;
    }
    return Num;
}
float BillTotal(float billValue)
{
    float total = billValue * 1.1 * 1.16;
    return total;
}
int main()
{
    float billTotal = BillTotal(Read("bill Value"));
    cout << "------------------------\n";
    cout << "Total Bill = " << billTotal << endl;
}
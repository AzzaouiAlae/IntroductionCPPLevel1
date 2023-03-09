#include <iostream>
using namespace std;

float Read(string Out, float Num = -1)
{
    if (Num == -1)
    {
        cout << "Please enter " << Out << " : ";
        cin >> Num;
    }
    else
    {
        cout << "Please enter " << Out << " : " << Num;        
    }
    return Num;
}
float Remainder(float Bill, float CashPaid)
{
    float paidBack = CashPaid - Bill;
    return paidBack;
}

int main()
{
    float Total = Remainder(Read("Bill"), Read("CashPaid"));
    cout << "--------------------\n";
    cout << "Remainder = " << Total << endl;
}
#include <iostream>

using namespace std;

void swapCalc(float& Num1, float& Num2)
{
    float Temp;
    Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;
}

void swapNumbers()
{
    float Num1, Num2;

    cout << "Please enter Num1 : ";
    cin >> Num1;

    cout << "Please enter Num2 : ";
    cin >> Num2;

    cout << "Num1 = " << Num1 << "  And = Num2 = " << Num2 << endl;

    cout << "---------------------------\n";

    swapCalc(Num1, Num2);

    cout << "Num1 = " << Num1 << "  And = Num2 = " << Num2 << endl;
}

int main()
{
    swapNumbers();
}
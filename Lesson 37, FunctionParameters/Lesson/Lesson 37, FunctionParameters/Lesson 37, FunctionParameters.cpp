#include <iostream>

using namespace std;

void MyFunction(int Num1)
{
    Num1 = 7000;
    cout << "Number inside function became = " << Num1 << endl;
    cout << "Function Num1 = " << &Num1 << "\n\n";
}

void MyFunction2(int &Num1)
{
    Num1 = 7000;
    cout << "Number inside function became = " << Num1 << endl;
    cout << "Function Num1 = " << &Num1 << "\n\n";
}

int main()
{
    int Num1 = 1000;
    MyFunction(Num1);

    cout << "Number after calling the function became = " << Num1 << endl;

    cout << "Main Num1 = " << &Num1 << "\n\n";

    MyFunction2(Num1);

    cout << "Number after calling the function became = " << Num1 << endl;

    cout << "Main Num1 = " << &Num1 << "\n\n";
}
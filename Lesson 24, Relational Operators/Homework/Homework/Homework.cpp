#include <iostream>

using namespace std;

int main()
{
    short A, B;
    cout << "Plase enter the first number A : ";
    cin >> A;

    cout << "Plase enter the second number B : ";
    cin >> B;

    cout << A << " = " << B << " is " << (A == B) << endl;
    cout << A << " != " << B << " is " << (A != B) << endl;
    cout << A << " > " << B << " is " << (A > B) << endl;
    cout << A << " < " << B << " is " << (A < B) << endl;
    cout << A << " >= " << B << " is " << (A >= B) << endl;
    cout << A << " <= " << B << " is " << (A <= B) << endl;
}
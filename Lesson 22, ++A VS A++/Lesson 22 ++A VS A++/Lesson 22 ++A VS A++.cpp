#include <iostream>
using namespace std;

int main()
{
    int A = 10;
    int B = A++;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    cout << "-------------------\n";
    B = ++A;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
}
#include <iostream>

using namespace std;

int MySumFunction(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    int num1, num2;
    cout << "Plese enter num1 : ";
    cin >> num1;

    cout << "Please enter num2 : ";
    cin >> num2;

    cout << MySumFunction(num1, num2) << endl;
}
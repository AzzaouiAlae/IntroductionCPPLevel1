#include <iostream>
#include <string>

using namespace std;

string OpTyCalc(int num[2], char operationType)
{
    switch (operationType)
    {
    case '+': return to_string(num[0]) + " + " + to_string(num[1]) + " = " + to_string(num[0] + num[1]) + "\n"; break;
    case '-': return to_string(num[0]) + " - " + to_string(num[1]) + " = " + to_string(num[0] - num[1]) + "\n"; break;
    case '*': return to_string(num[0]) + " * " + to_string(num[1]) + " = " + to_string(num[0] * num[1]) + "\n"; break;
    case '/': return to_string(num[0]) + " / " + to_string(num[1]) + " = " + to_string(num[0] / num[1]) + "\n"; break;
    default: return "Wrong!";
    }
}

void Calculator()
{
    int num[2];
    char operationType;

    cout << "Please enter Num1 : ";
    cin >> num[0];

    cout << "Please enter operation Type : ";
    cin >> operationType;

    cout << "Please enter Num2 : ";
    cin >> num[1];

    cout << "------------------------------------\n";

    cout << OpTyCalc(num, operationType);
}

int main()
{
    Calculator();
}
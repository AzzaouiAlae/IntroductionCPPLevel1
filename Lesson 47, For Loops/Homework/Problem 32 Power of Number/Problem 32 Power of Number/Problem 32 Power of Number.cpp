#include <iostream>

using namespace std;

void PowerOfNumber()
{
    float number, power, result = 0;
    cout << "Power Of Number\n";
    cout << "------------------------\n";

    cout << "Please enter number : ";
    cin >> number;

    cout << "Please enter power : ";
    cin >> power;

    cout << "------------------------\n";
    int counter = 1;

    if (power < 0)
        cout << "Wrong Number!" << endl;

    else if (power == 0)
        cout << "1\n";

    else if (power == 1)
        cout << number << endl;

    else
    {
        result = number;
        while (counter < power)
        {
            result *= number;
            counter++;
        }
        cout << result << endl;
    }
    cout << "---------------------\n";
    cout << pow(number, power) << endl;
}

int main()
{
    PowerOfNumber();
}
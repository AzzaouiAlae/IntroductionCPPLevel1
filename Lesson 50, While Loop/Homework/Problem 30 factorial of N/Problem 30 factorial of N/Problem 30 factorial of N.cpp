#include <iostream>

using namespace std;

void ReadNum(int& num)
{
    cout << "Please enter Number : ";
    cin >> num;
    while (num <= 0)
    {
        cout << "Wrong please enter Number : ";
        cin >> num;
    }
}

void FactorialOfNum()
{
    int num, Counter = 1, result = 0;

    ReadNum(num);
    result = num;
    while (Counter + 1 < num)
    {
        Counter++;
        result *= Counter;
    }
    cout << "The factorail of " << num << " is : " << result;
}

int main()
{
    FactorialOfNum();
}
#include <iostream>

using namespace std;

void ReadNum(int& num)
{
    cout << "Please enter number : ";
    cin >> num;
}

void sumUntil99()
{
    int num, Total = 0;
    ReadNum(num);
    while (num <= 99)
    {
        Total += num;
        num++;
    }
    cout << "Total = " << Total << endl;
}

int main()
{
    sumUntil99();
}
#include <iostream>

using namespace std;

void ReadNum(int& num)
{
    cout << "Please enter Number : ";
    cin >> num;
}

void PrintForm1toNum()
{
    int num, Counter = 0;
    ReadNum(num);
    while (num > Counter)
    {
        Counter++;
        cout << Counter << endl;
    }
}

int main()
{
    PrintForm1toNum();
}
#include <iostream>

using namespace std;

void ReadNum(int& num)
{
    cout << "Please enter Number : ";
    cin >> num;
}

void NumbersFromNumTo1()
{
    int num;
    ReadNum(num);
    while (num > 0)
    {
        cout << num << endl;
        num--;
    }
}
int main()
{
    NumbersFromNumTo1();
}
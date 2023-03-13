#include <iostream>

using namespace std;

void ReadPIN(int& num)
{
    cout << "Enter PIN Code : ";
    cin >> num;
}

void ATMpin()
{
    int num;
    for (int i = 0; i < 3; i++)
    {
        ReadPIN(num);
        if (num == 1234)
        {
            cout << "Your Balance is : 7500" << endl;
            i = 3;
        }

        else
            cout << "Wrong PIN" << endl;
        cout << "------------------------------\n";
    }
}

int main()
{
    ATMpin();
}
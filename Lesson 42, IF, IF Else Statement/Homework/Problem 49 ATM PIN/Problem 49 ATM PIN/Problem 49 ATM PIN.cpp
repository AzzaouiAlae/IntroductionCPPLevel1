#include <iostream>
using namespace std;

string CheckCode(int PINcode)
{
    if (PINcode == 1234)
        return "your Balance is : 7500\n";

    else
        return "Wrong PIN\n";
}

void ATMcode()
{
    int PINcode;
    cout << "Enter PIN Code : ";
    cin >> PINcode;
    cout << "-------------------------\n";
    cout << CheckCode(PINcode);
    cout << "-------------------------\n";

}

int main()
{
    while (true)
        ATMcode();
}
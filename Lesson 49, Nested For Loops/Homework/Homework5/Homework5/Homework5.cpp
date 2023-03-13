#include <iostream>

using namespace std;

int main()
{
    for (char A = 'F'; A >= 'A'; A--)
    {
        for (char B = 'A'; B + (A - 65) <= 'F'; B++)
        {
            cout << B << " ";
        }
        cout << endl;
    }
}
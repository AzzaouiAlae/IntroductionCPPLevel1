#include <iostream>

using namespace std;

int main()
{
    cout << "For loop\n";
    for (int i = 1; i <= 5; i++)
        cout << i << endl;
    cout << "--------------------\n";

    cout << "While loop\n";
    int i = 1;
    while (i <= 5)
    {
        cout << i << endl;
        i++;
    }
}
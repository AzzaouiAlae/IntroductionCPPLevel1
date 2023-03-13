#include <iostream>

using namespace std;

int main()
{
    int Number;
    cout << "Please enter a positive number : ";
    cin >> Number;

    while (Number < 0)
    {
        cout << "Please enter a positive number : ";
        cin >> Number;
    }

    cout << "\nYour number is : " << Number << endl;
}
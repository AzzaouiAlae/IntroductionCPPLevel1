#include <iostream>

using namespace std;

short ReadNumberInRange(int from, int to)
{
    cout << "Please enter number : ";
    short num;
    cin >> num;
    while (num < from || num > to)
    {
        cout << "Please enter number : ";        
        cin >> num;
    }
    return num;
}

int main()
{
    cout << "\nThe Number is : " << ReadNumberInRange(0, 10) << endl;
}
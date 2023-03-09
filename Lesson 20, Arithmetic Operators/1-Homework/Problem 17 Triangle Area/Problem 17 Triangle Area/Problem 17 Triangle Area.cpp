#include <iostream>
using namespace std;

float Read(int i)
{
    float num;
    if (i == 1)
    {
        cout << "Please enter the base of triangle : ";
        cin >> num;
        return num;
    }
    else
    {
        cout << "Please enter the height of triangle : ";
        cin >> num;
        return num;
    }
}

float area()
{
    float base = Read(1);
    float Height = Read(2);
    
    return base / 2 * Height;
}

int main()
{
    cout << "Area = " << area() << endl;
}

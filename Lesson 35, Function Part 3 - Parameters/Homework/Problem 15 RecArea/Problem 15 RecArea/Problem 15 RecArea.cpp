#include <iostream>
using namespace std;

float Read(int i)
{
    float Num;
    if (i == 1)
    {
        cout << "Plese enter rectangle long : ";
        cin >> Num;
        return Num;
    }
    else
    {
        cout << "Plese enter rectangle wide : ";
        cin >> Num;
        return Num;
    }
}
float area()
{
    float rectangleLong = Read(1);
    float rectangleWide = Read(2);

    float area = rectangleLong * rectangleWide;
    return area;
}

int main()
{
    cout << "Area = " << area() << endl;
}
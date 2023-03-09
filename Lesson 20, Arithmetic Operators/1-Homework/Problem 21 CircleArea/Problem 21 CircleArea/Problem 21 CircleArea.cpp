#include <iostream>
#define M_PI 3.14159265358979323846
using namespace std;

float read(string Out)
{
    float CircleAlong = 0;
    cout << "Plese enter " << Out << " : ";
    cin >> CircleAlong;
    return CircleAlong;
}

float Area(float CircleAlong)
{
    float area = pow(CircleAlong, 2) / (4 * M_PI);
    return area;
}

int main()
{
    cout << "Area = " << Area(read("Circle Along"));
}
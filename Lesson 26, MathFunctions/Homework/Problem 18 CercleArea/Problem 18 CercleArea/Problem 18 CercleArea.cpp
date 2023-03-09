#include <iostream>
#define M_PI 3.14159265359

using namespace std;

float circleAreaRadius(float radius)
{
    return M_PI * pow(radius, 2);
}

void circleArea()
{
    cout << "circle Area Through radius\n";
    cout << "--------------------------------\n";
    float radius;
    cout << "please enter radius of circle : ";
    cin >> radius;
    cout << "Area = " << circleAreaRadius(radius) << endl;
}

int main()
{
    circleArea();
}
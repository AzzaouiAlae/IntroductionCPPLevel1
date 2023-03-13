#include <iostream>
#define M_PI 3.14159265359

using namespace std;

float CircleAreaTriangleClc(float side, float base)
{
    return M_PI * (pow(base, 2) / 4) * ((2 * side - base) / (2 * side + base));
}
void CircleAreaTriangle()
{
    float side, base;
    cout << "Circle Area Insosceles Triangle\n" << "----------------------------------------\n";
    cout << "Please enter the side Triangle : ";
    cin >> side;
    cout << "Please enter the base Triangle : ";
    cin >> base;
    cout << "----------------------------------------\n";
    cout << "Area = " << CircleAreaTriangleClc(side, base) << endl;
}

int main()
{
    CircleAreaTriangle();
}
#include <iostream>
#define M_PI 3.14159265359

using namespace std;
float CircleAreaArbitTriangle(float side1, float side2, float base)
{
    float P = (side1 + side2 + base) / 2;
    return M_PI * pow((side1 * side2 * base) / (4 * sqrt(P * (P - side1) * (P - side2) * (P - base))), 2);
}
void CircleAreaArbitTriangle()
{
    cout << "Circle Area Arbitrary Triangle\n";
    cout << "-------------------------------\n";
    float side1, side2, base;
    cout << "Please enter Side1 : ";
    cin >> side1;

    cout << "Please enter Side2 : ";
    cin >> side2;

    cout << "Please enter base : ";
    cin >> base;

    cout << "-------------------------------\n";

    cout << "Area = " << CircleAreaArbitTriangle(side1, side2, base);
}

int main()
{
    CircleAreaArbitTriangle();
}
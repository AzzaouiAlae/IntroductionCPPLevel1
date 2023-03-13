#include <iostream>

using namespace std;

float AreaThroughDiagonal(float diagonal, float side)
{
    return side * sqrt(pow(diagonal, 2) - pow(side, 2));
}

void RectangleArea()
{
    float diagonal, side;
    cout << "Rectangle area through diagonal\n";
    cout << "-----------------------------------\n";

    cout << "Please enter side of rectangle : ";
    cin >> side;

    cout << "Please enter diagonal of rectangle : ";
    cin >> diagonal;

    cout << "-----------------------------------\n";
    cout << "Area = " << AreaThroughDiagonal(diagonal, side) << endl;
}

int main()
{
    RectangleArea();
}
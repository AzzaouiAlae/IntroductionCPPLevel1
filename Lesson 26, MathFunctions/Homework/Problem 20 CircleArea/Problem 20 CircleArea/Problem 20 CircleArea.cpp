#include <iostream>
#define M_PI 3.14159265359

using namespace std;

float circleAreaSquareCalc(float Square)
{
    return M_PI * pow(Square / 2, 2);
}

void circleAreaSquare()
{
    float Square;
    cout << "circle Area Through Square\n" << "-----------------------------------\n";
    cout << "Please enter Square side : ";
    cin >> Square;
    cout << "-----------------------------------\n";
    cout << "Area = " << circleAreaSquareCalc(Square) << endl;
}

int main()
{
    circleAreaSquare();
}
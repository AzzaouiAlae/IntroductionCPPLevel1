#include <iostream>
#define M_PI 3.14159265358979323846
using namespace std;

float read(string Out)
{
    float Num;
    cout << "Plese enter " << Out << " : ";
    cin >> Num;
    return Num;
}

float Area(float side, float base)
{
    float area = M_PI * (pow(base, 2) / 4) * ((2 * side - base) / (2 * side + base));
    return area;
}

int main()
{
    cout << "Area = " << Area(read("Side of Tringle"), read("Base of Tringle"));
}
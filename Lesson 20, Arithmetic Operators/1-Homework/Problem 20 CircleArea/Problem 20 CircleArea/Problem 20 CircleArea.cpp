#include <iostream>
#define M_PI 3.14159265358979323846

using namespace std;
float Read()
{
    float SquareSide = 0;
    cout << "Plese enter Square side : ";
    cin >> SquareSide;
    return SquareSide;
}

float Area(float SquareSide)
{
    float area = M_PI * pow(SquareSide / 2, 2);
    return area;
}
int main()
{
    cout << "Area = " << Area(Read()) << endl;
}
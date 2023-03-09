#include <iostream>
#define M_PI 3.14159265359
using namespace std;

float Read(string out, float num = -1)
{
    if (num == -1)
    {
        cout << "Please enter " << out << " : ";
        cin >> num;
    }
    else
        cout << "Please enter " << out << " : " << num << endl;
    return num;
}
float CircleArea(float sideC, float sideB, float sideA)
{
    float p = (sideA + sideB + sideC) / 2;
    return M_PI * pow((sideA * sideB * sideC) / (4 * sqrt(p * (p - sideA) * (p - sideB) * (p - sideC))), 2);
}
void printArea()
{
    cout << "Area = " << CircleArea(Read("side C"), Read("side B"), Read("side A")) << endl;
}
int main()
{
    printArea();
}
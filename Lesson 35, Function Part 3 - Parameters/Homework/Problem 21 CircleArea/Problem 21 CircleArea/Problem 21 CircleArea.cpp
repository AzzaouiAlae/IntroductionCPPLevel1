#include <iostream>
#define M_PI 3.14159265359

using namespace std;
float circleAreaLongCircumfCalu(float LongCircumference)
{
    return pow(LongCircumference, 2) / (4 * M_PI);
}
void circleAreaLongCircumf()
{
    float LongCircumference;
    cout << "circle Area along the circumference\n" << "-------------------------------------\n";
    cout << "Please enter along the circumference : ";
    cin >> LongCircumference;
    cout << "-------------------------------------\n";
    cout << "Area = " << circleAreaLongCircumfCalu(LongCircumference) << endl;
}

int main()
{
    circleAreaLongCircumf();
}
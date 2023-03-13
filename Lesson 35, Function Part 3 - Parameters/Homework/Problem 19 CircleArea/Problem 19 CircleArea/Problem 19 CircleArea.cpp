#include <iostream>
#define M_PI 3.14159265359

using namespace std;

float AreaDiameterCalcul(float Diameter)
{
    return M_PI * pow(Diameter / 2, 2);
}
void CercleAreaDiameter()
{
    cout << "Cercle Area Through Diameter\n";
    cout << "---------------------------------\n";
    float Diameter;
    cout << "Please eneter Diameter of cercle : ";
    cin >> Diameter;
    cout << "---------------------------------\n";
    cout << "Area = " << AreaDiameterCalcul(Diameter) << endl;
}

int main()
{
    CercleAreaDiameter();
}
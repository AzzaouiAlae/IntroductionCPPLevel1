#include <iostream>
using namespace std;
# define M_PI 3.14159265358979323846

float Read()
{
    float diameter = 0;
    cout << "Plese enter Diamete of Cercle : ";
    cin >> diameter;
    return diameter;
}

float Area(float D)
{    
    return M_PI * pow(D/2,2);
}

int main()
{    
    cout << "Area = " << Area(Read()) << endl;
}
#include <iostream>
using namespace std;

float Read(string Out, float num = 0)
{
    if (num == 0)
    {
        cout << "Plese enter " << Out << " : ";
        cin >> num;
    }
    else
    {
        cout << "Plese enter " << Out << " : " << num << endl;
    }
    
    return num;
}

float powA(float Count, float Anum)
{
    
    return pow(Anum, Count);
}
void print(float P, float N)
{    
    cout << "Power = " << powA(Read("Power", P), Read("Number", N)) << endl;
    cout << "-------------------------------\n";    
}
int main()
{
    for (int i = 1; i < 7; i++)
    {
        print(0, 0); 
    }
    
}

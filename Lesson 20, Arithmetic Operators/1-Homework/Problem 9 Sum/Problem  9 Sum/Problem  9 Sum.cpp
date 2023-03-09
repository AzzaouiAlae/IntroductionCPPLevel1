#include <iostream>
using namespace std;

float Num()
{
    float sum = 0;

    for (int i = 1; i <= 3; i++)
    {
        float num;
        cout << "Plese enter num" << i << " : ";
        cin >> num;
        sum += num;
    }
    return sum;
}
int main()
{
    float sum = Num();
    cout << "Total : " << sum << endl;
}


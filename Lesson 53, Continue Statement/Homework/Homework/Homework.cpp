#include <iostream>

using namespace std;

int main()
{
    int Array[5] = { 10, 20, 55, 10, 20 }, sum = 0;
    for (int i = 0; i < 5; i++)
    {
        if (Array[i] > 50)
            continue;

        sum += Array[i];
    }
    cout << "Sum = " << sum << endl;
}
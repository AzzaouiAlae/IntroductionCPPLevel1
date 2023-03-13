#include <iostream>

using namespace std;

int main()
{
    int Arry[10] = { 10,20,44,55,33,22,99,88,99,100 };
    int i = 0;
    while (i < 10)
    {
        if (Arry[i] == 20)                    
            break;               
        i++;
    }
    cout << "Array[" << i << "] = " << Arry[i] << endl;
}
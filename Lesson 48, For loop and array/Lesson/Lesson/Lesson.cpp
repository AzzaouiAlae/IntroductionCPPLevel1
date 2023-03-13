#include <iostream>

using namespace std;

void ReadArrayData(int Array[100], int& Lenght)
{
    cout << "How Many Number do you want to enter (1 to 100) : ";
    cin >> Lenght;
    for (int i = 0; i < Lenght; i++)
    {
        cout << "Enter number " << i + 1 << " : ";
        cin >> Array[i];
    }
    cout << "--------------------------------------\n";
}

void PrintArrayData(int Array[100], int Lenght)
{
    for (int i = 0; i < Lenght; i++)
    {
        cout << "Number[" << (i + 1) << "] = " << Array[i] << endl;
    }
    cout << "*********************************\n";
}

int CalculatArraySum(int Array[100], int Lenght)
{
    int result = 0;
    for (int i = 0; i < Lenght; i++)
    {
        result += Array[i];
    }
    return result;
}

float CalculatArrayAverage(int Array[100], int Lenght)
{
    return (float)CalculatArraySum(Array, Lenght) / Lenght;
}

int main()
{
    int Array[100], Lenght;
    ReadArrayData(Array, Lenght);
    PrintArrayData(Array, Lenght);
    cout << "Sum = " << CalculatArraySum(Array, Lenght) << endl;
    cout << "Average = " << CalculatArrayAverage(Array, Lenght) << endl;
}
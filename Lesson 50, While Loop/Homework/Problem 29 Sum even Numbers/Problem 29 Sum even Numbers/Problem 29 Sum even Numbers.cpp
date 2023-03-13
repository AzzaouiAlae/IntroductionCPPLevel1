#include <iostream>

using namespace std;

void ReadNum(int& num)
{
    cout << "Please enter Number : ";
    cin >> num;
}

void SumEvenNumber()
{
    int num, Counter = 0, Sum = 0;
    ReadNum(num);
    while (Counter <= num)
    {
        Counter++;
        if (Counter % 2 == 0)
        {
            Sum += Counter;
        }
    }
    cout << "The sum of even numbers = " << Sum << endl;
}

int main()
{
    SumEvenNumber();
}
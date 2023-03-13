#include <iostream>

using namespace std;

void ReadNum(int& num)
{
    cout << "Please enter number : ";
    cin >> num;
}

void SumOddNumbers()
{
    int num, Counter = 0, sum = 0;
    ReadNum(num);

    while (Counter <= num)
    {
        if (!(Counter % 2 == 0))
        {
            sum += Counter;
        }
        Counter++;
    }
    cout << "Sum of Odd numbers is : " << sum;
}

int main()
{
    SumOddNumbers();

}
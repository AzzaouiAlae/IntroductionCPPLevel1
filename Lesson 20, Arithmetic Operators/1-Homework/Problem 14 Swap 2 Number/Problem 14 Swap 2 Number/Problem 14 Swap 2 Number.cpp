#include <iostream>
using namespace std;

float Numbers(int i)
{
    float num;
    cout << "Plese enter num" << i << " : ";
    cin >> num; 
    return num;
}

float Swap()
{
    float num1 = Numbers(1);
    float num2 = Numbers(2);
    cout << "Number1 is " << num1 << " and Number2 is " << num2 << endl;
    cout << "----------------------\n";
    float temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "Number1 is " << num1 << " and Number2 is " << num2 << endl;
    return 0;
}

int main()
{
    Swap();
}
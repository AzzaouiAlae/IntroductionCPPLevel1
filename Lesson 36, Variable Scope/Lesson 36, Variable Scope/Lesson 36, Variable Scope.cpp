#include <iostream>

using namespace std;

int a = 18;

void MyFunction1()
{
    int a = 500;
    cout << "The value of a inside function is: " << a << endl;
}

int main()
{
    int a = 10;
    cout << "the value of a inside main is: " << a << endl;
    MyFunction1();
    cout << "the value of global a is: " << ::a << endl;
}
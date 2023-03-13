#include <iostream>
#include <string>

using namespace std;

void myfunction()
{
    cout << "This is my first procedure, it got to executed\n";
}

string myfunction2()
{
    return "This is my first returnig value function, this is the value\n";
}

int myfunction3()
{
    int x = 10;
    int y = 20;
    return x * y;
}

float myFunction4()
{
    float x = 10.5;
    float y = 20.3;
    return x * y;
}
int main()
{
    myfunction();
    cout << myfunction2();
    cout << "My int function = " << myfunction3() << endl;
    cout << "My float function = " << myFunction4() << endl;

}
#include <iostream>
using namespace std;
string ValidInvalid(int Age)
{
    if (Age >= 18 && Age <= 45)
        return "Valid Age\n";
    else
        return "invalid Age\n";
}
void AgeTest()
{
    short Age;
    cout << "Please enter your age : ";
    cin >> Age;
    cout << "-----------------------------\n";
    cout << ValidInvalid(Age);
}

int main()
{
    AgeTest();
}
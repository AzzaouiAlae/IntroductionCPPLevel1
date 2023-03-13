#include <iostream>

using namespace std;

string HiredReject(int age, string driverLicense)
{
    if (age >= 21 && driverLicense == "y")
        return "Hired!\n";
    else
        return "Rejected!\n";
}

void DriverAgeTest()
{
    int age;
    string driverLicense;
    cout << "Please enter your age : ";
    cin >> age;
    cout << "Did you have driver's license (y/n) : ";
    cin >> driverLicense;
    cout << "------------------------------------\n";

    cout << HiredReject(age, driverLicense);
}

int main()
{
    DriverAgeTest();
}
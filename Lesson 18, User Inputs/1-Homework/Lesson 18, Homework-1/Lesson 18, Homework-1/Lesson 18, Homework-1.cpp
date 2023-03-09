#include <iostream>
using namespace std;

void main()
{
    string FirstName, LastName, city, country;
    short Age;
    float MonthlySalary, YearlySalary;
    bool Married;
    char Gender;

    cout << "********************************\n";
    cout << "Plese enter your First Name : ";    cin >> FirstName;
    cout << "Plese enter your Last Name : ";    cin >> LastName;
    cout << "Plese enter your Age : ";    cin >> Age;
    cout << "Plese enter your country : ";    cin >> country;
    cout << "Plese enter your city : ";    cin >> city;
    cout << "Plese enter your Monthly Salary : ";    cin >> MonthlySalary;    YearlySalary = MonthlySalary * 12;
    cout << "Enter your Gender (M/F) : ";    cin >> Gender;
    cout << "Are You Married (0/1) : ";    cin >> Married;   

    cout << "********************************\n";
    cout << "Name : " << FirstName << " " << LastName << "\n";
    cout << "Age : " << Age << "\n";
    cout << "City : " << city << "\n";
    cout << "Country : " << country << "\n";
    cout << "Monthly Salary : " << MonthlySalary << "\n";
    cout << "Yearly Salary : " << YearlySalary << "\n";
    cout << "Gender : " << Gender << "\n";
    cout << "Married : " << Married << "\n";
    cout << "********************************" << endl;
}
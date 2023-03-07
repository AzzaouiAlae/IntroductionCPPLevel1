#include <iostream>

using namespace std;

int main()
{
    string Name = "Alae Azzaoui", city = "Rabat", country = "Morocco";
    short Age = 27;
    float MonthlySalary = 4000, YearlySalary = (MonthlySalary*12);
    bool Married = 0;
    char Gender = 'M';

    cout << "********************************\n";
    cout << "Name : " << Name << "\n";
    cout << "Age : " << Age << "\n";
    cout << "City : " << city << "\n";
    cout << "Country : " << country << "\n";
    cout << "MonthlySalary : " << MonthlySalary << "\n";
    cout << "Yearly Salary : " << YearlySalary << "\n";
    cout << "Gender : " << Gender << "\n";
    cout << "Married : " << Married << "\n";
    cout << "********************************" << endl;
}
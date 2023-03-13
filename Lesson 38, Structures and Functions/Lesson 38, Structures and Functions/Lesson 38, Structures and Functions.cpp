#include <iostream>
#include <string>

using namespace std;

enum enGender
{
    Male = 'M', female = 'F'
};

struct Contact
{
    string Address;
    string Tel;
    string Email;
};

struct strInfo
{
    string FirstName;
    string LastName;
    short Age;
    string City;
    string Country;
    int MonthlySalary;
    int YearlySalary;
    enGender Gender;
    bool Married;
    Contact contact;
};

void ReadInfo(strInfo& Info)
{
    cout << "Please enter First Name : ";
    cin >> Info.FirstName;

    cout << "Please enter Last Name : ";
    cin >> Info.LastName;

    cout << "Please enter Age : ";
    cin >> Info.Age;

    cout << "Please enter City : ";
    cin >> Info.City;

    cout << "Please enter Country : ";
    cin >> Info.Country;

    cout << "Please enter Monthly Salary : ";
    cin >> Info.MonthlySalary;

    Info.YearlySalary = Info.MonthlySalary * 12;

    cout << "Please enter Gender (M/F): ";
    {
        char temp;
        cin >> temp;
        temp == 'M' ? Info.Gender = Male : Info.Gender = female;
    }

    cout << "Are you married (0/1): ";
    {
        int temp;
        cin >> temp;
        temp == 1 ? Info.Married = true : Info.Married = false;

    }
    cout << "Please enter Address : ";
    cin.ignore();
    getline(cin, Info.contact.Address);

    cout << "Please enter Telephone : ";
    cin >> Info.contact.Tel;
    cin.ignore();
    cout << "Please enter Email : ";
    cin >> Info.contact.Email;
}

void PrintInfo(strInfo Info)
{
    cout << "****************************************" << endl;
    cout << "First Name : " << Info.FirstName << endl;
    cout << "Last Name : " << Info.LastName << endl;
    cout << "Age : " << Info.Age << endl;
    cout << "City : " << Info.City << endl;
    cout << "Country : " << Info.Country << endl;
    cout << "Monthly Salary : " << Info.MonthlySalary << endl;
    cout << "Yearly Salary : " << Info.YearlySalary << endl;
    cout << "Gender : " << (char)Info.Gender << endl;
    cout << "Married : " << boolalpha << Info.Married << endl;
    cout << "Address : " << Info.contact.Address << endl;
    cout << "Tel : " << Info.contact.Tel << endl;
    cout << "Email : " << Info.contact.Email << endl;

    cout << "****************************************" << endl;
}

int main()
{
    strInfo persone1;
    ReadInfo(persone1);
    PrintInfo(persone1);
}
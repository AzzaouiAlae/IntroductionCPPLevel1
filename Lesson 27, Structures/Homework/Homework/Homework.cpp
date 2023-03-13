#include <iostream>

using namespace std;

struct contact
{
    string Addres, Tel, Email;
};

struct person
{
    string name, city, country;
    int age, MontlySalary, YearlySalary;
    char Gender;
    bool Married;
    contact Contact;
};

int main()
{
    person Person1;
    Person1.name = "Alae Azzaoui";
    Person1.age = 29;
    Person1.city = "Temara";
    Person1.country = "Morocco";
    Person1.MontlySalary = 4000;
    Person1.YearlySalary = Person1.MontlySalary * 12;
    Person1.Gender = 'M';
    Person1.Married = false;
    Person1.Contact.Addres = "Fadila 41";
    Person1.Contact.Email = "azzaoui@outlook.com";
    Person1.Contact.Tel = "06 22 43 73 87";

    cout << "************************\n";
    cout << "Name : " << Person1.name;
    cout << "\nAge :" << Person1.age;
    cout << "\nCity : " << Person1.city;
    cout << "\nCountry : " << Person1.country;
    cout << "\nMontly Salary : " << Person1.MontlySalary;
    cout << "\nYearly Salary : " << Person1.YearlySalary;
    cout << "\nGender : " << Person1.Gender;
    cout << "\nStatus : " << Person1.Married;
    cout << "\nAddres : " << Person1.Contact.Addres;
    cout << "\nEmail : " << Person1.Contact.Email;
    cout << "\nTel : " << Person1.Contact.Tel;
    cout << "************************\n";
}
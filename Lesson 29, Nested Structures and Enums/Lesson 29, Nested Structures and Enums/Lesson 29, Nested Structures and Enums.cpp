#include <iostream>
using namespace std;

enum enColor { Red = 'R', Green = 'G', Yello = 'Y', Blue = 'B', Orange = 'O' };
enum enGender { Male = 'M', Femal = 'F' };
enum enMaritalStatus { Single = 'S', Married = 'M' };

struct stcAddress
{
    string StreetName, BuildingNo, ZipCode, City, Country;
};
struct stcContactInfo
{
    string Phone, Email;
    stcAddress Address;
};
struct stcPerson
{
    string firstName, LastName;
    int Age;
    int MontlySalary;
    int YearlySalary;
    stcContactInfo ContactInfo;
    enMaritalStatus MaritalStatus;
    enGender Gender;
    enColor FavouriteColor;
};

int main()
{
    stcPerson Person1;
    Person1.firstName = "AlaeEddine";
    Person1.LastName = "Azzaoui";
    Person1.Age = 29;
    Person1.ContactInfo.Address.City = "Temara";
    Person1.ContactInfo.Address.Country = "Morocco";
    Person1.ContactInfo.Address.ZipCode = "12000";
    Person1.ContactInfo.Address.StreetName = "Al Waad Assadik";
    Person1.ContactInfo.Address.BuildingNo = "41";
    Person1.ContactInfo.Email = "Azzaoui@outlook.com";
    Person1.ContactInfo.Phone = "06 22 43 73 87";
    Person1.MontlySalary = 4000;
    Person1.YearlySalary = Person1.MontlySalary * 12;
    Person1.MaritalStatus = enMaritalStatus::Single;
    Person1.Gender = enGender::Male;
    Person1.FavouriteColor = enColor::Orange;

    cout << "**************************************\n";
    cout << "First Name : " << Person1.firstName << endl;
    cout << "Last Name : " << Person1.LastName << endl;
    cout << "Age : " << Person1.Age << endl;
    cout << "City : " << Person1.ContactInfo.Address.City << endl;
    cout << "Country : " << Person1.ContactInfo.Address.Country << endl;
    cout << "Zip Code : " << Person1.ContactInfo.Address.ZipCode << endl;
    cout << "Street Name : " << Person1.ContactInfo.Address.StreetName << endl;
    cout << "Building No : " << Person1.ContactInfo.Address.BuildingNo << endl;
    cout << "Email : " << Person1.ContactInfo.Email << endl;
    cout << "Phone : " << Person1.ContactInfo.Phone << endl;
    cout << "Montly Salary : " << Person1.MontlySalary << endl;
    cout << "Yearly Salary : " << Person1.YearlySalary << endl;
    cout << "MaritalStatus : " << (char)Person1.MaritalStatus << endl;
    cout << "Gender : " << (char)Person1.Gender << endl;
    cout << "Favourite Color : " << (char)Person1.FavouriteColor << endl;
    cout << "**************************************\n";
}
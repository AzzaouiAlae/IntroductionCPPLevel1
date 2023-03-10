#include <iostream>

using namespace std;

struct stAddress
{
    string Street;
    string Country;
    string City;
};
struct stOwner
{
    string fullName;
    string PhoneNumber;
    stAddress Address;
};

struct Car
{
    string Mark;
    string Model;
    int Year;
    stOwner Owner;
};

int main()
{
    Car MyCar1, MyCar2, CarX;
    MyCar1.Mark = "BMW";
    MyCar1.Model = "X5";
    MyCar1.Year = 2000;
    MyCar1.Owner.fullName = "Alae Azzaoui";
    MyCar1.Owner.PhoneNumber = "06 22 43 73 87";
    MyCar1.Owner.Address.Country = "Morocco";
    MyCar1.Owner.Address.City = "Temara";

    MyCar2.Mark = "Ford";
    MyCar2.Model = "Mustang";
    MyCar2.Year = 2022;

    CarX.Mark = "Toyota";
    CarX.Model = "Prado";
    CarX.Year = 2004;

    cout << MyCar1.Mark << " " << MyCar1.Model << " " << MyCar1.Year << " " 
         << MyCar1.Owner.fullName << " " << MyCar1.Owner.PhoneNumber << " " 
         << MyCar1.Owner.Address.Country << " " << MyCar1.Owner.Address.City << endl;

    cout << MyCar2.Mark << " " << MyCar2.Model << " " << MyCar2.Year << endl;

    cout << CarX.Mark << " " << CarX.Model << " " << CarX.Year << endl;
}
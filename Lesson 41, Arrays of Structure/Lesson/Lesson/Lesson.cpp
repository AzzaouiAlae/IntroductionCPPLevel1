#include <iostream>

using namespace std;

struct strcInfo
{
    string FirstName;
    string LastName;
    int age;
    string Phone;
};

int main()
{
    strcInfo Person[2];

    Person[0].FirstName = "Alae";
    Person[0].LastName = "Azzaoui";
    Person[0].Phone = "0622437387";
    Person[0].age = 27;

    Person[1].FirstName = "Ali";
    Person[1].LastName = "Maher";
    Person[1].Phone = "0000";
    Person[1].age = 22;

    cout << "First Name : " << Person[0].FirstName << endl;
    cout << "Last Name : " << Person[0].LastName << endl;
    cout << "Phone : " << Person[0].Phone << endl;
    cout << "age : " << Person[0].age << endl;
    cout << "-------------------------------------\n";

    cout << "First Name : " << Person[1].FirstName << endl;
    cout << "Last Name : " << Person[1].LastName << endl;
    cout << "Phone : " << Person[1].Phone << endl;
    cout << "age : " << Person[1].age << endl;
    cout << "-------------------------------------\n";
}
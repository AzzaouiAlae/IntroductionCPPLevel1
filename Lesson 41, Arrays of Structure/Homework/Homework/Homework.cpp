#include <iostream>

using namespace std;

struct strcInfo
{
    string FirstName;
    string LastName;
    int age;
    string Phone;
};

void ReadPerson(strcInfo& person)
{
    cout << "--------------------------------\n";
    cout << "Please enter your First Name : ";
    cin >> person.FirstName;

    cout << "Please enter your Last Name : ";
    cin >> person.LastName;

    cout << "Please enter your Age : ";
    cin >> person.age;

    cout << "Please enter your Phone : ";
    cin >> person.Phone;
}

void ReadPersonArray(strcInfo person[2])
{
    ReadPerson(person[0]);
    ReadPerson(person[1]);
}

void PrintPerson(strcInfo person)
{
    cout << "--------------------------------\n";
    cout << "First Name : " << person.FirstName << endl;
    cout << "Last Name : " << person.LastName << endl;
    cout << "Age : " << person.age << " Years" << endl;
    cout << "Phone : " << person.Phone << endl;
    cout << "--------------------------------\n";
}

void PrintPersonArray(strcInfo person[2])
{
    cout << "Person 1" << endl;
    PrintPerson(person[0]);

    cout << "Person 2" << endl;
    PrintPerson(person[1]);
}

int main()
{
    strcInfo person[2];
    
    ReadPersonArray(person);
    PrintPersonArray(person);
}
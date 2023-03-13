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

void ReadPersonArray(strcInfo person[100], int& Lenght)
{
    cout << "How Many Number do you want to enter (1 to 100) : ";
    cin >> Lenght;
    for (int i = 0; i < Lenght; i++)
    {
        cout << "--------------------------------\n";
        cout << "Person" << i + 1 << endl;
        ReadPerson(person[i]);
    }
    cout << "*********************************\n";
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

void PrintPersonArray(strcInfo person[100], int Lenght)
{
    for (int i = 0; i < Lenght; i++)
    {
        cout << "Person" << i + 1 << endl;
        PrintPerson(person[i]);
    }
}

int main()
{
    strcInfo person[100];
    int Lenght;
    ReadPersonArray(person, Lenght);
    PrintPersonArray(person, Lenght);
}
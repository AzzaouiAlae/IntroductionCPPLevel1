#include <iostream>
#include <string>
using namespace std;

int main()
{
    int Number;
    string Name, Address;
    cout << "Pelase enter number : ";
    cin >> Number;
    cout << "Pelase enter your Name : ";
    cin.ignore(1, '\n');
    getline(cin, Name);
    cout << "Pelase enter your Address : ";
    getline(cin, Address);
    cout << "-------------------------\n";
    cout << "number : " << Number << endl;
    cout << "Name : " << Name << endl;
    cout << "Address : " << Address << endl;
}
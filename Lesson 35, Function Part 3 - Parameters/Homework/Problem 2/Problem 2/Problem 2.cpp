#include <iostream>
#include <string>

using namespace std;

void readAndPrintName()
{
    string name;
    cout << "Please enter your name : ";
    getline(cin, name);

    cout << "Your name is : " << name << endl;
}

int main()
{
    readAndPrintName();
}
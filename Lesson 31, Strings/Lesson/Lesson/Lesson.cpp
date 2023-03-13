#include <iostream>
#include <string>

using namespace std;

int main()
{
    string MyString = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the My String is : " << MyString.length() << endl;
    cout << MyString[0] << MyString[11] << MyString[0] << MyString[4] << endl;
    string s1 = "10", s2 = "20";
    string s3 = s1 + s2;
    cout << "string s3 = " << s3 << endl;
    int sum = stoi(s1) + stoi(s2);
    cout << "int sum : " << sum << endl;
    cout << "Pelase enter your full Name : ";
    string fullName;
    //cin >> fullName;
    getline(cin, fullName);
    cout << "Your Name is : " << fullName << endl;
}
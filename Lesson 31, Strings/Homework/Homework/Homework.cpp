#include <iostream>
#include <string>

using namespace std;

int main()
{
    string string1, string2, string3;
    cout << "Please enter string1 : ";
    getline(cin, string1);


    cout << "Please enter number : ";
    cin >> string2;

    cout << "Please enter number : ";
    cin >> string3;

    cout << "************************" << endl;
    cout << "The Length of string1 is : " << string1.length() << endl;
    cout << "Characters at 0, 2, 4, 7 are : " << string1[0] << " " << string1[2] << " " << string1[4] << " " << string1[7] << endl;
    cout << "Concatenating of string2 and string3 : " << string2 + string3 << endl;
    cout << "string2 * string3 : " << stof(string2) * stof(string3) << endl;
}
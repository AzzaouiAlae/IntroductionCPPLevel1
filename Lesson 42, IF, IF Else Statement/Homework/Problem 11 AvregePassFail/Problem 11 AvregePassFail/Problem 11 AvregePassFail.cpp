#include <iostream>
#include <string>

using namespace std;

float avrage(float Marks[3])
{
    return (Marks[0] + Marks[1] + Marks[2]) / 3;
}

string PassFail(float avrage)
{
    if (avrage >= 50)
        return  "The avrage is : " + to_string(avrage) + "\nPass!\n";
    else
        return "The avrage is : " + to_string(avrage) + "\nfail!\n";
}

void MarksTest()
{
    float Marks[3];

    cout << "Please enter Mark1 : ";
    cin >> Marks[0];

    cout << "Please enter Mark2 : ";
    cin >> Marks[1];

    cout << "Please enter Mark3 : ";
    cin >> Marks[2];
    cout << "-------------------------------------\n";
    cout << PassFail(avrage(Marks));
}

int main()
{
    MarksTest();
}
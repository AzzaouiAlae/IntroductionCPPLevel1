#include <iostream>
#include <string>
using namespace std;


float Number()
{
    float num;
    cout << "Plese enter Number : ";
    cin >> num;
    return num;
}

string HalfNumber(int number)
{
    string print = "the Half of " , str1 = "";
    
    print += to_string(number);
    print += " is ";
    print += to_string(number / 2);

    return print;
}

void print(string ToPrint)
{
    cout << ToPrint << endl;
}

int main()
{
    cout << "Half Number Program\n\n";
    print(HalfNumber(Number()));
    //cout << "Plese enter Number : ";
    //int num;
    //cin >> num;
    //cout << "the Half of " << num << " is " << num / 2 << endl;
}

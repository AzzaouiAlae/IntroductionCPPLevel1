#include <iostream>
using namespace std;

int main()
{
    bool A = 1, B = 0;

    cout << boolalpha << "(A && B) = " << (A && B) << endl;
    cout << boolalpha << "(A || B) = " << (A || B) << endl;
    cout << boolalpha << "!A = " << !A << endl;
    cout << boolalpha << "!B = " << !B << endl;
    cout << boolalpha << "!(A && B) = " << !(A && B) << endl;
    cout << boolalpha << "!(A || B) = " << !(A || B) << endl;

    bool Result;
    // NOT(5>6 OR 7=7) AND NOT (1 OR false)
      //  !(f  or t)              !true
    //       false       &&       false = false;

    Result = !(5 > 6 || 7 == 7) && !(1 || false);
    cout << "\n!(5 > 6 || 7 == 7) && !(1 || false) = " << boolalpha << Result << endl;

}
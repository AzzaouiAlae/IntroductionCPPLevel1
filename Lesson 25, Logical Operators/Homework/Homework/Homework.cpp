#include <iostream>
using namespace std;

int main()
{
    cout << boolalpha << "(12 >= 12) = " << (12 >= 12) << endl;
    cout << boolalpha << "(12 > 7) = " << (12 > 7) << endl;
    cout << boolalpha << "(8 < 6) = " << (8 < 6) << endl;
    cout << boolalpha << "(8 == 8) = " << (8 == 8) << endl;
    cout << boolalpha << "(12 <= 12) = " << (12 <= 12) << endl;
    cout << boolalpha << "(7 == 5) = " << (7 == 5) << endl;
    cout << boolalpha << "!(12>=12) = " << !(12 >= 12) << endl;
    cout << boolalpha << "!(12<7) = " << !(12 < 7) << endl;
    cout << boolalpha << "!(8<6) = " << !(8 < 6) << endl;
    cout << boolalpha << "!(8==8) = " << !(8 == 8) << endl;
    cout << boolalpha << "!(12 <= 12) = " << !(12 <= 12) << endl;
    cout << boolalpha << "!(7==5) = " << !(7 == 5) << endl;
    cout << boolalpha << "(1 && 1) = " << (1 && 1) << endl;
    cout << boolalpha << "(true && 0) = " << (true && 0) << endl;
    cout << boolalpha << "(0 || 1) = " << (0 || 1) << endl;
    cout << boolalpha << "(0 || 0) = " << (0 || 0) << endl;
    cout << boolalpha << "!0 = " << !0 << endl;
    cout << boolalpha << "!(1 || 0) = " << !(1 || 0) << endl;
    cout << boolalpha << "((7==7)&&(7>5)) = " << ((7 == 7) && (7 > 5)) << endl;
    cout << boolalpha << "((7==7) && (7<5)) = " << ((7 == 7) && (7 < 5)) << endl;
    cout << boolalpha << "((7==7) || (7<5)) = " << ((7 == 7) || (7 < 5)) << endl;
    cout << boolalpha << "((7<7) || (7>5)) = " << ((7 < 7) || (7 > 5)) << endl;
    cout << boolalpha << "!(7==7) && (7>5) = " << (!(7 == 7) && (7 > 5)) << endl;
    cout << boolalpha << "((7==7) || !(7<5)) = " << ((7 == 7) || !(7 < 5)) << endl;
    cout << boolalpha << "(( 5>6 && 7==7) || (1||0)) = " << ((5 > 6 && 7 == 7) || (1 || 0)) << endl;
    cout << boolalpha << "(!(5>6 && 7==7) || (1||0)) = " << (!(5 > 6 && 7 == 7) || (1 || 0)) << endl;
    cout << boolalpha << "(!(5>6 && 7==7) || !(1||0)) = " << (!(5 > 6 && 7 == 7) || !(1 || 0)) << endl;
    cout << boolalpha << "(!(5>6 || 7==7) && !(1||0)) = " << (!(5 > 6 || 7 == 7) && !(1 || 0)) << endl;
    cout << boolalpha << "((5>6 && 7 <=8) || (8>1 && 4<= 3)) = " << ((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3)) << endl;
    cout << boolalpha << "((5>6 && !(7<=8) && (8>1 || 4<=3)) || true) = " << ((5 > 6 && !(7 <= 8) && (8 > 1 || 4 <= 3)) || true) << endl;
}
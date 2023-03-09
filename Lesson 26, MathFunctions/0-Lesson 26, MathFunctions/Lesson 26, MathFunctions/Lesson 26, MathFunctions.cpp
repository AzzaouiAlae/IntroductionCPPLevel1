#include <iostream>

using namespace std;

int main()
{
    double x = 64;
    cout << "Square root value of 64 : " << sqrt(x) << endl; // give 8
    cout << "Square root value of 50 : " << sqrt(50) << endl; // give 7.07107

    cout << "round(2.4) : " << round(2.4) << endl; //gives 2
    cout << "round(2.5) : " << round(2.5) << endl; //gives 3
    cout << "round(2.7) : " << round(2.7) << endl; //gives 3

    cout << "round(sqrt(50)) : " << round(sqrt(50)) << endl; //give 7

    cout << "round(2.4) + round(5.6) : " << round(2.4) + round(5.6) << endl; // gives 8

    cout << "round(2.4) / 2 : " << round(2.4) / 2 << endl; // gives 1

    int X = 2;
    int y = 4;
    cout << "pow(X, y) = " << pow(X, y) << endl; //16
    cout << "pow(4, 3) = " << pow(4, 3) << endl; //64

    cout << "ceil(2.9)  : " << ceil(2.9) << endl; //gives 3
    cout << "floor(2.9) : " << floor(2.9) << endl; //gives 2

    cout << "ceil(-2.9) : " << ceil(-2.9) << endl; // give -2
    cout << "floor(-2.9) : " << floor(-2.9) << endl; //give -3

    cout << "abs(-10) : " << abs(-10) << endl; // gives 10
    cout << "abs(10) : " << abs(10) << endl; // gives 10
}
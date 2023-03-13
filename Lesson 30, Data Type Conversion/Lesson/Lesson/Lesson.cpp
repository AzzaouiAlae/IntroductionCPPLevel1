#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num1;
    double num2 = 18.99;

    num1 = num2;
    num1 = (int)num2;
    num1 = int(num2);

    cout << num1 << "\n\n";

    string str = "123.456";
    int num_int = stoi(str);
    cout << "num_int = " << num_int << endl;
    
    float num_float = stoi(str);
    cout << "num_float = " << num_float << endl;

    double num_double = stoi(str);
    cout << "num_double = " << num_double << "\n\n";

    int Num1 = 123;
    double Num2 = 18.99;

    string S1 = to_string(Num1), S2 = to_string(Num2);

    cout << "S1 = " << S1 << endl;
    cout << "S2 = " << S2 << endl;

}
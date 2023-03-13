#include <iostream>
#include <string>

using namespace std;


int main()
{
    int i = 0;
    float f = 0;
    double d = 0;
    cout << "Data Type Conversion\n";
    string st1 = "43.22";

    i = stoi(st1);
    cout << "string to int = " << i << endl;

    f = stof(st1);
    cout << "string to float = " << f << endl;

    d = stod(st1);
    cout << "string to double = " << d << endl;

    int N1 = 20;
    st1 = to_string(N1);
    cout << "int to string = " << st1 << endl;

    double N2 = 33.5;
    st1 = to_string(N2);
    cout << "double to string = " << st1 << endl;

    float N3 = 55.23;
    st1 = to_string(N3);
    cout << "float to string = " << st1 << endl;
}
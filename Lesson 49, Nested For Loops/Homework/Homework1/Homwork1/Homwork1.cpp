#include <iostream>

using namespace std;

int main()
{
    for (char AA = 'A'; AA <= 'Z'; AA++)
    {
        for (char ZZ = 'A'; ZZ <= 'Z'; ZZ++)
        {
            cout << AA << ZZ << endl;
        }
        cout << "------\n";
    }
}

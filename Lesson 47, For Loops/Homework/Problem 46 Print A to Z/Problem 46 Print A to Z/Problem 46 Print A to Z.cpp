#include <iostream>

using namespace std;

void fromAtoZ()
{
    char A = 'A';
    while (A <= 'Z')
    {
        cout << A << endl;
        A++;
    }
}

int main()
{
    fromAtoZ();
}
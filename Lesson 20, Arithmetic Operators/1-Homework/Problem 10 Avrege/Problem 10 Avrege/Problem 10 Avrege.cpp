#include <iostream>
using namespace std;

float Marks()
{
    float avrege = 0;
    for (int i = 1; i <= 3; i++)
    {
        float mark = 0;
        cout << "Plese Enter the Mark " << i << " : ";
        cin >> mark;
        avrege += mark;
    }
    return avrege / 3;

}

int main()
{
    cout << "The Avrege of 3 Marks\n\n";
    cout << "The Avrege of 3 Marks = " << Marks() << endl;
}

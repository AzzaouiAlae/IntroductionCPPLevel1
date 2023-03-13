#include <iostream>
using namespace std;
string PassFail(int Mark)
{
    if (Mark >= 50)
    {
        return "Pass\n";
    }
    else
    {
        return "Fail\n";
    }
}
void MarkTest()
{
    int Mark;
    cout << "Please enter Mark : ";
    cin >> Mark;

    cout << PassFail(Mark);
}
int main()
{
    MarkTest();
}
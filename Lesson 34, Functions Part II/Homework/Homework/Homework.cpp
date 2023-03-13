#include <iostream>
#include <string>

using namespace std;

float ReadNum(string out, float num = -1)
{
    if (num == -1)
    {
        cout << "Plese enter " << out << " : ";
        cin >> num;
    }
    else
        cout << "Plese enter " << out << " : " << num << endl;

    return num;
}
float mySumfunction()
{
    float number1 = ReadNum("Number1");
    float number2 = ReadNum("Number2");
    return number1 + number2;
}
void mySumProcedure()
{
    float result = mySumfunction();
    cout << "********************\n";
    cout << result << endl;
}

int main()
{
    mySumProcedure();
}
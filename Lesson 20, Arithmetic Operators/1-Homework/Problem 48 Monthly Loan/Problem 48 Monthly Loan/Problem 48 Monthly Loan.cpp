#include <iostream>
using namespace std;

int Read(string out, int num = -1)
{
    if (num == -1)
    {
        cout << "Plese enter " << out << " : ";
        cin >> num;
    }
    else    
        cout << "Plese enter " << out << " : " << num;
    return num;
}

int Monthly(int months, int LoaAmont)
{
    int montly = LoaAmont / months;
    return montly;
}

void monthly()
{
    int mothly = Monthly(Read("months"), Read("LoaAmont"));
    cout << "You will pay " << mothly << " Monthly";
}
int main()
{
    monthly();
}
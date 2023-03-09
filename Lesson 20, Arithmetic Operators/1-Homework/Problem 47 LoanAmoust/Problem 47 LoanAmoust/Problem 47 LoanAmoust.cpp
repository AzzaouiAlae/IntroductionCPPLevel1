#include <iostream>
using namespace std;

int read(string out, int num = -1)
{
    if(num == -1)
    {
        cout << "Please enter " << out << " : ";
        cin >> num;
    }
    else
        cout << "Please enter " << out << " : " << num;

    return num;
}
int Months(int Monthly, int LoanAmoust)
{
    int Month = LoanAmoust / Monthly;
    return Month;
}
void Loan()
{
    int months = Months(read("Monthly"), read("Loan Amoust"));
    cout << "Total = " << months;
}
int main()
{
    Loan();
}
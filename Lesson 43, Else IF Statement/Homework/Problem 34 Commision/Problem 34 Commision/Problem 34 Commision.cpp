#include <iostream>
#include <string>

using namespace std;

string TotalPercentage(int TotalSales)
{
    if (TotalSales >= 1000000)
        return "Percentage is 1% : " + to_string(TotalSales * 0.01) + "\n";
    else if (TotalSales >= 500000)
        return "Percentage is 2% : " + to_string(TotalSales * 0.02) + "\n";
    else if (TotalSales >= 100000)
        return "Percentage is 3% : " + to_string(TotalSales * 0.03) + "\n";
    else if (TotalSales >= 50000)
        return "Percentage is 5% : " + to_string(TotalSales * 0.05) + "\n";
    else
        return "Percentage is 0% : 0\n";
}

void CommissionPer()
{
    int TotalSales;
    cout << "Enter Total Sales : ";
    cin >> TotalSales;
    cout << TotalPercentage(TotalSales);
    cout << "----------------------------\n";
}
int main()
{
    CommissionPer();
}
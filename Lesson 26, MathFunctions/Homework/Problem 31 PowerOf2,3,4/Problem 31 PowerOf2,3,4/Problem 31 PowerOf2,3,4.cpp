#include <iostream>

using namespace std;

void Power234()
{
    float num;
    cout << "Power Of 2, 3 , 4\n";
    cout << "------------------------------\n";
    cout << "Please enter Number : ";
    cin >> num;
    //cout << "Power Of 2 : " << pow(num, 2) << endl;
    //cout << "Power Of 3 : " << pow(num, 3) << endl;
    //cout << "Power Of 4 : " << pow(num, 4) << endl;

    for (int i = 2; i < 5; i++)
    {
        cout << "Power Of " << i << " : " << pow(num, i) << endl;
    }
}

int main()
{
    Power234();
}
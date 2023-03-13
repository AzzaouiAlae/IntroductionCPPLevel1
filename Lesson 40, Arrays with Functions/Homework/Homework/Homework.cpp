#include <iostream>
#include <array>
using namespace std;

void GradeRead(float grade[3])
{
    cout << "Please enter Grade1 :";
    cin >> grade[0];

    cout << "Please enter Grade2 :";
    cin >> grade[1];

    cout << "Please enter Grade3 :";
    cin >> grade[2];
}
float average(float grade[3])
{
    return (grade[0] + grade[1] + grade[2]) / 3;
}
int main()
{
    float grade[3];

    GradeRead(grade);

    cout << "**********************************\n";
    cout << "The average of grades is " << average(grade);
}
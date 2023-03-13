#include <iostream>

using namespace std;

string AtoFtest(int grade)
{
    if (100 < grade)
        return "Wrong Grade\n";
    else if (grade >= 90)
        return "Grade : A\n";
    else if (grade >= 80)
        return "Grade : B\n";
    else if (grade >= 70)
        return "Grade : C\n";
    else if (grade >= 60)
        return "Grade : D\n";
    else if (grade >= 50)
        return "Grade : E\n";
    else if (grade < 50)
        return "Grade : F\n";
}

void gradeTest()
{
    int grade;
    cout << "Please enter your grade : ";
    cin >> grade;
    cout << AtoFtest(grade);
    cout << "\n--------------------\n";
}

int main()
{
    gradeTest();
}
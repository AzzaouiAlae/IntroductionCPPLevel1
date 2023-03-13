#include <iostream>

using namespace std;

struct person
{
    string Name, City, Country;
    short Age;
};

void printStars(int i)
{    
    for (int j = 0; j < i; j++)
    {
        cout << "*";
    }
    cout << endl;
}

void DisplyMyCartInfo()
{
    printStars(25);    
    person p1;
    p1.Name = "Alae azzaoui";
    p1.Age = 29;
    p1.City = "Temara";
    p1.Country = "Morocco";

    cout << "Name : " << p1.Name << endl;
    cout << "Age : " << p1.Age << " Year" << endl;
    cout << "City : " << p1.City << endl;
    cout << "Country : " << p1.Country << endl;
    printStars(25);
    cout << endl;
}

void IloveProg()
{
    cout << "I love programing!\n";
    cout << "I Promise to be the best developor ever!\n";
    cout << "I Know if will take same time to practice, but i will achieve my goal!\n";
    cout << "best Regards.\n";
    cout << "Alae azzaoui\n\n\n";
}

void StarsFunc()
{
    for (int i = 0; i < 5; i++)
    {
        printStars(8);
    }
    cout << endl;
}

void Hfunc()
{
    cout << "*     *\n";
    cout << "*     *\n";
    cout << "*******\n";
    cout << "*     *\n";
    cout << "*     *\n";
    cout << endl;
}

int main()
{
    DisplyMyCartInfo();
    StarsFunc();
    printStars(25);
    IloveProg();
    printStars(25);
    Hfunc();
}
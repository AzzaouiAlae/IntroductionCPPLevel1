#include <iostream>

using namespace std;

float area(float width, float length)
{
    return width * length;
}

void RectangleArea()
{
    cout << "Rectangle Area Calculator\n";
    cout << "-----------------------------------------\n";
    float width, length;
    cout << "Please enter width of rectangle : ";
    cin >> width;

    cout << "Please enter length of rectangle : ";
    cin >> length;

    cout << "-----------------------------------------\n";
    cout << "Area = " << area(width, length) << endl;
}

int main()
{    
    RectangleArea();
}
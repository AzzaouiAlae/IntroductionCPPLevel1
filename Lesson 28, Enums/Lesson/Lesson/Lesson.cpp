#include <iostream>

using namespace std;

enum Color { Red = 'R', Green = 'G', Yellow = 'Y', Blue = 'B' };
enum Direction { North = 0, South = 200, East = 100, West = 300 };
enum Week { Sun = 1, Mon = 2, Tue = 3, Wed = 04, Thue = 5, Fri = 6, Sat = 6 };
enum Gender { Male = 'M', Female = 'F' };
enum Status { Single = 'S', Married = 'M' };

int main()
{
    Color MyColor = Blue;
    Direction MyDirection = West;
    Week Today = Wed;
    Gender MyGender = Male;
    Status MyStatus = Single;

    cout << "Color is : " << (char)MyColor << "\n";
    cout << "The Direction is : " << MyDirection << endl;
    cout << "Today is : " << Today << endl;
    cout << "My Gender is : " << (char)MyGender << endl;
    cout << "My Status : " << (char)MyStatus << endl;
}
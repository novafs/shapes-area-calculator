#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int choice;
    float area, radius, length, width;

    cout << "1 Area of Circle" << endl;
    cout << "2 Area of Rectangle" << endl;
    cout << "3 Area of Square" << endl;
    cout << "4 Area of Triangle" << endl;
    cout << "Enter your choice :: " << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter the radius of the circle :: ";
        cin >> radius;
        area = 3.14 * pow(radius, 2);
        break;
    case 2:
        cout << "Enter the length of the Rectangle :: ";
        cin >> length;
        cout << "Enter the width of the Rectangle :: ";
        cin >> width;
        area = length * width;
        break;
    case 3:
        cout << "Enter the length of side of Square :: ";
        cin >> length;
        area = pow(length, 2);
        break;
    case 4:
        cout << "Enter the length of the Triangle :: ";
        cin >> length;
        cout << "Enter the width of the Triangle :: ";
        cin >> width;
        area = (length * width) / 2;
        break;
    default:
        cout << "\nInvalid choice...!";
        break;
    }
    cout << "\nArea :: " << area << endl;
    return 0;
}
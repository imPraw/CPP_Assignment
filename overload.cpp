#include <iostream>
#include <cmath>
using namespace std;
float area(float a,float b,float c)
{
    float area, s;
    s = (a + b + c) / 2;
    return area = sqrt (s * (s - a) * (s - b) * (s - c));
}
float area(float l,float b)
{
    return (0.5) * (l * b);
}

int main()
{
    int g;
    cout << "Enter 1. To calculate area of triangle with 3 sides" << endl;
    cout << "Enter 2. To calculate area of triangle with base and height" << endl;
    cin >> g;
    if (g == 1)
    {
        float a, b, c;
        cout << "enter the three sides of the triangle" << endl;
        cin >> a >> b >> c;
        cout << "the area of triangle is" << area (a, b, c) << endl;
    }
     else if (g == 2)
     {
        float l, b;
        cout << "enter the base and height of the triangle" << endl;
        cin >> l >> b;
        cout << "the area of triangle is" << area(l, b) << endl;
     }
     
    
    return 0;
}
#include <iostream>
#include <cmath>

using namespace std;
int vol(int a = 2)
{
    return a ^ 3;
}
int vol(int a = 2, int b = 4, int c = 5)
{
    return a * b * c;
}
int vol(int a = 2, int b = 4)
{
    return 3.14 * a ^ 2 * b;
}
int main()
{
    int l, b, h, r;
    cout << "The volume of the cube is" << vol(l) << endl;
    cout << "The volume of the cuboid is " << vol(l, b, h) << endl;
    cout << "The volume of the cylinder is " << vol(r, h) << endl;
}
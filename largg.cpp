#include <iostream>
using namespace std;

int main() // largest element in the array
{
    int i[5] = {1, 2, 10, 4, 5};
    int gtr = i[0];
    for (int j = 0; j < 5; j++)
    {
        if (i[j + 1] > i[j])
        {
            gtr = i[j + 1];
        }
    }
    cout << "The greatest element is " << gtr << endl;
}
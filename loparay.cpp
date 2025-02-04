#include <iostream>
using namespace std;

int main()
{
    cout << "The even number from 1 to 20 are";
    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
}
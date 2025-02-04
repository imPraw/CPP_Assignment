#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    cout << "The even number from 1 to 20 are" << endl;
    do
    {
        if (i % 2 == 0)
        {
            cout << i << endl;   
        }
        i++;
    } while (i <= 20);
}
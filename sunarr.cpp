#include <iostream>
using namespace std;

int main() // sum of all elements in an array
{
    int i [5] = {1,2,3,4,5}; 
    int sum = 0;
    for (int j = 0; j < 5; j++)
    {
        sum = i[j] + sum;
    }
     cout << "SUM of all elements in the array is = "<< sum << endl;
}
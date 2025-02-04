#include <iostream>
using namespace std;

int main ()
{
    int num;
    cout << "Enter 1. Celsius to Fahrenheit " << endl;
    cout << "Enter 2. Fahrenheit to Celsius " << endl;
    cin >> num;
   if (num == 1)
   {
        float C,F;
        cout << "Enter temp in Celsius " << endl;
        cin >> C;
        F = (C * 9/5) + 32;
        cout << "The temperature in Fahrenheit is " << F << endl;
   }
   else if (num == 2)
   {
        float C,F;
        cout << "Enter temp in Fahrenheit " << endl;
        cin >> F;
        C = (F - 32) * 5/9;
        cout << "The temperature in Celsius is " << C << endl;
   }
   
   
    return 0;
}
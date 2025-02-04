#include <iostream>
using namespace std;

int main ()
{
    int num;
    cout << "enter your salary ";
    cin >> num;
    if (num >= 20000 && num <= 25000)
    {
        cout << "Your salary is" << num * 15 / 100 + num << endl;
    } 
    else if (num <= 20000)
    {
        cout << "Your salary is " << num * 10 / 100 + num << endl;
    }
    else
    {
        cout << "Your salary is " << num * 5 / 100 + num << endl;
    }
    
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int num, firstDigit, lastDigit, temp, digits = 0;
    cout << "Input any number: ";
    cin >> num;
    temp = num;
    lastDigit = temp % 10; 
    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    firstDigit = temp;
    int powTen = 1;
    for (int i = 0; i < digits; i++) {
        powTen *= 10;
    }
    int middlePart = (num % powTen) / 10;
    int swappedNum = lastDigit * powTen + middlePart * 10 + firstDigit;

    cout << "The number after swapping the first and last digits is: " << swappedNum << endl;
    return 0;
}

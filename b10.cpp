#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int upperLimit;

    cout << "Input the upperlimit: ";
    cin >> upperLimit;

    cout << "The non-prime numbers are:\n";

    for (int i = 2; i <= upperLimit; i++) {
        if (!isPrime(i)) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}

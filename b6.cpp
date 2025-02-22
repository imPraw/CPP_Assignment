#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;

    cout << "Input a number to find the last prime number before it: ";
    cin >> n;

    for (int i = n - 1; i >= 2; i--) {
        if (isPrime(i)) {
            cout << i << " is the last prime number before " << n << endl;
            return 0; 
        }
    }

    cout << "No prime number exists before " << n << endl;
    return 0;
}

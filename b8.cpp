#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, next;

    cout << "Input number of terms to display: ";
    cin >> n;

    cout << "Here is the Fibonacci series up to " << n << " terms:\n";

    for (int i = 0; i < n; i++) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }

    cout << endl;
    return 0;
}

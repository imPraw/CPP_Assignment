#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    cin >> str;

    int n = str.length();
    for (int i = n - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;

    return 0;
}

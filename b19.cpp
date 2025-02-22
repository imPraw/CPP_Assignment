#include <iostream>
#include <string>
using namespace std;
#include <algorithm>

int main() {
    string str;
    string reversedStr;

    cout << "Enter a string: ";
    cin >> str;

    reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());

    if (str == reversedStr) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}

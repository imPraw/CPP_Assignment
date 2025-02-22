#include <iostream>
#include <string>
using namespace std;

string ones(int n) {
    string onesArr[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    return onesArr[n];
}

string teens(int n) {
    string teensArr[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    return teensArr[n - 10];
}

string tens(int n) {
    string tensArr[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    return tensArr[n];
}

string numberToWords(int n) {
    if (n == 0) return "Zero";

    string result = "";

    if (n >= 10 && n < 20) {
        result += teens(n);
    } else {
        if (n >= 20) {
            result += tens(n / 10);
            n %= 10;
            if (n > 0) result += " ";
        }
        result += ones(n);
    }

    return result;
}

int main() {
    int n;

    cout << "Enter a non-negative integer: ";
    cin >> n;

    cout << "The number in words: " << numberToWords(n) << endl;

    return 0;
}

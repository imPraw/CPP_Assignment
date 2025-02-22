#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string str, word, largestWord;

    cout << "Enter a string: ";
    getline(cin, str);

    stringstream ss(str);
    int maxLength = 0;

    while (ss >> word) {
        if (word.length() > maxLength) {
            maxLength = word.length();
            largestWord = word;
        }
    }

    cout << "The largest word is: " << largestWord << endl;

    return 0;
}

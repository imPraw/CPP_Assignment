#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    bool newWord = true;

    for (int i = 0; i < str.length(); i++) {
        if (newWord && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            newWord = false;
        } else if (isspace(str[i])) {
            newWord = true;
        }
    }

    cout << "Modified string: " << str << endl;

    return 0;
}

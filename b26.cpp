#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

vector<string> capitalizeFirstLetter(vector<string>& vec) {
    for (auto& str : vec) {
        if (!str.empty()) {
            str[0] = toupper(str[0]);
        }
    }
    return vec;
}

int main() {
    vector<string> vec = {"red", "green", "black", "white", "pink"};

    cout << "Original Vector elements: ";
    for (const auto& str : vec) {
        cout << str << " ";
    }
    cout << endl;

    vector<string> result = capitalizeFirstLetter(vec);

    cout << "Capitalize the first character of each vector element: ";
    for (const auto& str : result) {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}

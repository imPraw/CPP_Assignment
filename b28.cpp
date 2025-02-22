#include <iostream>
#include <string>
#include <unordered_set>

bool containsAllLetters(const std::string &s1, const std::string &s2) {
    std::unordered_set<char> letters(s1.begin(), s1.end());
    for (char ch : s2) {
        if (letters.find(ch) == letters.end()) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string str1 = "Python", str2 = "Py";
    std::cout << std::boolalpha << containsAllLetters(str1, str2) << std::endl;
    return 0;
}
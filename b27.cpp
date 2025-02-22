#include <iostream>
#include <vector>
#include <string>
#include <cctype>

bool containsNumber(const std::string &str) {
    for (char ch : str) {
        if (std::isdigit(ch)) {
            return true;
        }
    }
    return false;
}

std::vector<std::string> filterStringsWithNumbers(const std::vector<std::string> &inputVector) {
    std::vector<std::string> result;
    for (const std::string &str : inputVector) {
        if (containsNumber(str)) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> words = {"red", "green23", "1black", "white"};
    std::vector<std::string> filteredWords = filterStringsWithNumbers(words);
    for (const std::string &word : filteredWords) {
        std::cout << word << " ";
    }
    std::cout << std::endl;
    return 0;
}

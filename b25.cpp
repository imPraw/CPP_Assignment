#include <iostream>
#include <vector>
using namespace std;

vector<int> findSmallerThanNeighbours(const vector<int>& vec) {
    vector<int> result;
    int n = vec.size();

    if (n < 3) {
        return result; 
    }

    for (int i = 1; i < n - 1; i++) {
        if (vec[i] < vec[i - 1] && vec[i] < vec[i + 1]) {
            result.push_back(vec[i]);
        }
    }

    return result;
}

int main() {
    vector<int> vec = {1, 2, 5, 0, 3, 1, 7};

    cout << "Original Vector elements: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> smallerElements = findSmallerThanNeighbours(vec);

    cout << "Vector elements that are smaller than their adjacent neighbours: ";
    for (int num : smallerElements) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

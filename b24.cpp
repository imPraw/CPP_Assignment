#include <iostream>
using namespace std;

int countOccurrences(int arr[], int n, int target) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    return count;
}

int main() {
    int n, target;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number to count occurrences: ";
    cin >> target;

    int result = countOccurrences(arr, n, target);

    cout << "The number " << target << " occurs " << result << " times in the array." << endl;

    return 0;
}

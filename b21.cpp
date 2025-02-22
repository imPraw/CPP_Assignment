#include <iostream>
using namespace std;

void findLargestThree(int arr[], int n) {
    if (n < 3) {
        cout << "Array must contain at least three elements" << endl;
        return;
    }

    int first = arr[0], second = arr[0], third = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third) {
            third = arr[i];
        }
    }

    cout << "The largest three elements are: " << first << ", " << second << ", " << third << endl;
}

int main() {
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    findLargestThree(arr, n);

    return 0;
}

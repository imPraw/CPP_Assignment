#include <iostream>
#include <algorithm>
using namespace std;

void findKLargest(int arr[], int n, int k) {
    if (k > n) {
        cout << "k cannot be greater than the number of elements in the array." << endl;
        return;
    }

    sort(arr, arr + n, greater<int>());

    cout << "The " << k << " largest elements are: ";
    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n, k;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the value of k: ";
    cin >> k;

    findKLargest(arr, n, k);

    return 0;
}

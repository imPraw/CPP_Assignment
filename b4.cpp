#include <iostream>
using namespace std;

int main() {
    int n, temp;

    cout << "Enter the total number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) { 
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "The three highest numbers are:\n";
    for (int i = 0; i < 3 && i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
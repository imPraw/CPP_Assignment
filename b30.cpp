#include <iostream>

int sumArray(int arr[], int index) {
    if (index < 0) return 0;
    return arr[index] + sumArray(arr, index - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << sumArray(arr, size - 1) << std::endl;
    return 0;
}

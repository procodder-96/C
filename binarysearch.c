#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) return mid;  // Element found
        else if (arr[mid] < target) low = mid + 1;  // Search in right half
        else high = mid - 1;  // Search in left half
    }

    return -1;  // Element not found
}

int main() {
    int arr[] = {2, 5, 7, 10, 12, 15, 18};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int result = binarySearch(arr, size, target);
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}

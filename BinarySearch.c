#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int size, int key) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;  // Calculate middle index

        // Check if key is present at mid
        if (arr[mid] == key) {
            return mid;  // Return the index if key is found
        }

        // If key is smaller, search in the left half
        if (arr[mid] > key) {
            high = mid - 1;
        }
        // If key is larger, search in the right half
        else {
            low = mid + 1;
        }
    }

    return -1;  // Return -1 if key is not found
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};  // Example sorted array
    int size = sizeof(arr) / sizeof(arr[0]);  // Size of the array
    int key = 7;  // Element to search for

    int result = binarySearch(arr, size, key);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}

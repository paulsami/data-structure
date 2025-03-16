#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;  // Return the index if key is found
        }
    }
    return -1;  // Return -1 if key is not found
}

int main() {
    int arr[] = {5, 3, 8, 6, 2, 7};  // Example array
    int size = sizeof(arr) / sizeof(arr[0]);  // Size of the array
    int key = 6;  // The element we are searching for

    int result = linearSearch(arr, size, key);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}

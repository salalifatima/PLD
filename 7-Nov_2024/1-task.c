#include "main.h"
/**
 * prints the largest element in array.
 * Return: 0 is success
 */
int* largestElementAddress(int arr[], int size) {
    int *max = &arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            max = &arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {1, 24, 35, 12, 1, 7};
    int *largest = largestElementAddress(arr, 6);
    printf("Address of the largest element: %p\n", largest);
    printf("Largest element: %d\n", *largest);
    return 0;
}

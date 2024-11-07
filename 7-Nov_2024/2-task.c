#include <main.h>
/**
*  array as a parameter and returns the average of the elements without using array index.
*  Return: 0 is success
*/
double average(int *arr, int size) {
    int sum = 0;
    int *ptr = arr;
    for (int i = 0; i < size; i++) {
        sum += *ptr;
        ptr++;
    }
    return (double)sum / size;
}

int main() {
    int arr[] = {1, 24, 35, 12, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Average of elements: %.2f\n", average(arr, size));
    return 0;
}

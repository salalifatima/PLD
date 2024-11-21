/*
Write a C program that finds the maximum and minimum values in an integer array using pointers.
Function Signatures:
        Write a function findMax that takes an integer array and its size as input, and returns the maximum value in the array using pointer arithmetic.
        Write a function findMin that takes an integer array and its size as input, and returns the minimum value in the array using pointer arithmetic.
*/

/*
Bir massivin maksimum və minimum dəyərlərinin tapılması (pointer ilə)
Tələblər:

İstifadəçi bir massiv daxil edir.
İki funksiya yazılır:
findMax: Massivin maksimum dəyərini tapır.
findMin: Massivin minimum dəyərini tapır.
Pointerlərdən istifadə edilməlidir.
*/

#include <stdio.h>

int findMax(int *arr, int size) {
    int max = *arr;  
    for (int *ptr = arr; ptr < arr + size; ptr++) {
        if (*ptr > max) {
            max = *ptr;
        }
    }
    return max;
}

int findMin(int *arr, int size) {
    int min = *arr;  
    for (int *ptr = arr; ptr < arr + size; ptr++) {
        if (*ptr < min) {
            min = *ptr;
        }
    }
    return min;
}

int main() {
    int arr[100], size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Maximum value: %d\n", findMax(arr, size));
    printf("Minimum value: %d\n", findMin(arr, size));

    return 0;
}


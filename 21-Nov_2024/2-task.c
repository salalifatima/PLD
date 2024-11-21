/*
Write a C program that uses recursion to:
    Find the nth Fibonacci number.

The Fibonacci sequence is defined as:

    F(0) = 0
    F(1) = 1
    F(n) = F(n-1) + F(n-2) for n ≥ 2

Your task is to write a recursive function fibonacci(int n) that returns the nth Fibonacci number.

*/

/*
Fibonacci seriyasından verilmiş n-ci dəyəri tapmaq (rekursiya ilə)
Tələblər:

Fibonacci seriyasının tərifi:
F(0) = 0, F(1) = 1
F(n) = F(n-1) + F(n-2) (n ≥ 2 üçün).
Proqram rekursiv funksiya (fibonacci) istifadə edərək n-ci Fibonacci dəyərini tapmalıdır.
*/
#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;  
    if (n == 1) return 1;  
    return fibonacci(n - 1) + fibonacci(n - 2);  
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Fibonacci is not defined for negative numbers.\n");
    } else {
        printf("Fibonacci number F(%d) = %d\n", n, fibonacci(n));
    }

    return 0;
}



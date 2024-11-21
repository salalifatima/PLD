/*
1.Write a C program that:
    Takes multiple strings as command-line arguments.
    For each string, prints the string and its length on a new line.

The program should:
    Print each string provided as a command-line argument.
    Print the length of each string (excluding the null terminator).
    If no arguments are passed, the program should print a message: "No arguments provided."

Example:

Input:
./string_lengths Hello World "This is a test" Programming

Output:
String: Hello, Length: 5
String: World, Length: 5
String: This is a test, Length: 15
String: Programming, Length: 11
*/

/*
Komanda xəttində verilən sətirlərin çapı və uzunluqlarının hesablanması
Tələblər:

Proqram komanda sətri arqumentləri almalıdır.
Hər bir arqumentin mətnini və uzunluğunu (null terminator daxil deyil) çap etməlidir.
Əgər heç bir arqument verilməyibsə, proqram "No arguments provided." mesajını çap etməlidir.
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc == 1) { 
        printf("No arguments provided.\n");
        return 0;
    }

    for (int i = 1; i < argc; i++) {  
        printf("String: %s, Length: %lu\n", argv[i], strlen(argv[i]));
    }

    return 0;
}


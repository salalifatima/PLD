/*
3.
Write a C program that finds all the occurrences of a given character in a string and prints the indices where the character appears.

Function Signature: Write a function named findCharacterOccurrences that:

    Takes two arguments:
        A string (character array).
        A character to search for in the string.
    The function should:
        Traverse the string using pointers.
        Find all the occurrences of the specified character.
        Print the indices where the character appears.
    If the character is not found in the string, the function should print a message: "Character not found in the string."

*/

/*
Verilmiş bir sətirdəki bir simvolun bütün indekslərini tapmaq
Tələblər:

Bir sətir daxil edin.
Hər hansı bir simvolu tapmaq üçün funksiya (findCharacterOccurrences) yazın.
Funksiya həmin simvolun indekslərini göstərməli və tapılmadığı halda mesaj verməlidir.
*/


#include <stdio.h>

void findCharacterOccurrences(char *str, char ch) {
    int found = 0;
    for (char *ptr = str; *ptr != '\0'; ptr++) {  
        if (*ptr == ch) {
            printf("Character '%c' found at index: %ld\n", ch, ptr - str);
            found = 1;
        }
    }
    if (!found) { 
        printf("Character '%c' not found in the string.\n", ch);
    }
}

int main() {
    char str[100];
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    str[strcspn(str, "\n")] = '\0';  

    printf("Enter a character to search for: ");
    scanf("%c", &ch);

    findCharacterOccurrences(str, ch);

    return 0;
}


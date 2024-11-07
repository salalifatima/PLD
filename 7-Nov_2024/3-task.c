#include "main.h"
/**
*  to find number of word in sentence using pointer arithmetic.
*  char s[] = "Holberton School is the best";
*  Return: 0 is success
*/
int wordCount(char *s) {
    int count = 0;
    int inWord = 0;
    
    while (*s != '\0') {
        if (*s != ' ' && *s != '\n' && *s != '\t') {
            if (!inWord) {
                count++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
        s++;
    }
    return count;
}

int main() {
    char s[] = "Holberton School is the best";
    printf("Number of words: %d\n", wordCount(s));
    return 0;
}

#include "main.h"
/**
*  checks if two strings  are anagram or not
*  Return: 0 is success
*/

int isAnagram(char *str1, char *str2) {
    int count[256] = {0};  // Assuming ASCII characters

    while (*str1 != '\0') {
        count[(int)*str1]++;
        str1++;
    }

    while (*str2 != '\0') {
        count[(int)*str2]--;
        str2++;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0;  // Not an anagram
        }
    }

    return 1;  // Anagram
}

int main() {
    char str1[] = "listen";
    char str2[] = "silent";

    if (isAnagram(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }
    return 0;
}

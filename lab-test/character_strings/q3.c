#include <stdio.h>
#include <string.h>
void processString(char *str, int *totVowels, int *totDigits);
int main() {
    char str[50], *p;
    int totVowels, totDigits;
    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p = strchr(str, '\n')) *p = '\0';
    processString(str, &totVowels, &totDigits);
    printf("Total vowels = %d\n", totVowels);
    printf("Total digits = %d\n", totDigits);
    return 0;
}
void processString(char *str, int *totVowels, int *totDigits) {
    int v = 0, d = 0;
    while (*str) {
        if (*str >= '0' && *str <= '9') {
            d++;
        } else if (*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' ||
            *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u') {
            v++;
        }
        str++;
    }
    *totVowels = v;
    *totDigits = d;
}

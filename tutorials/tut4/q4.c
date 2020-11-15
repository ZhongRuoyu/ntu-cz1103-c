#include <stdio.h>

int stringcmp(char *s1, char *s2);

int main(void) {
    char s1[10] = "abcdefg";
    char s2[10] = "abcdefgh";
    printf("%d", stringcmp(s1, s2));
    return 0;
}

int stringcmp(char *s1, char *s2) {
    int i = 0;
    while (s1[i] == s2[i] && s1[i]) {
        i++;
    }
    if (s1[i] > s2[i]) return 1;
    if (s1[i] < s2[i]) return -1;
    return 0;
}

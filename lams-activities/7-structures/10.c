#include <stdio.h>
struct str1
{ char c[5]; char*s; };
int main()
{
    struct str1 s1[2] = {
        { "ABCD", "EFGH" },
        { "IJK", "LMN" }
    };
    struct str2 {
        struct str1 sr;
        int d;
    } s2 = {"OPQ", "RST", 32767};
    struct str1 *p[2];
    p[0]=&s1[0];
    p[1]=&s1[1];
    printf("%s ", ++p[1]->s);
    printf("%c", s2.sr.c[2]);;   
    return 0;
}
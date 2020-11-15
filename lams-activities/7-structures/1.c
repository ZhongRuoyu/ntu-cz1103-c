#include <stdio.h>
struct strin {
    char c[5];
    char *s;
};
int main()
{
    struct strin s={"ABCD","EFGH"};
    printf("%s%c\n",s.c,*s.s);
    return 0;
}
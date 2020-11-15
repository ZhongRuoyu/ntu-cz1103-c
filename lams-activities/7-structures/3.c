#include <stdio.h>
struct s {
    int a;
    int b;
    char *c;
};
int main()
{
    struct s x={19,83,"Zhang"};
    struct s *px=&x;
    printf("%d,%d,%s,",px->a,(*px).b, px->c);
    printf("%c,%s\n",*px->c-1, &px->c[1]);
    return 0;
}
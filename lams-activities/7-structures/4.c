#include <stdio.h>
typedef struct { int b,p; } A;
void f(A c);
int main()
{
    int i; 
    A a={1,2};
    f(a);
    printf("%d,%d\n",a.b,a.p);
    return 0;
}
void f(A c)
{
    int j;
    c.b+=1; c.p+=2;
}
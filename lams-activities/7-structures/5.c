#include <stdio.h>
struct stu {
    int x;
    char c;
};
void func(struct stu *b);
int main()
{
    struct stu a={12,'y'}, *p=&a;
    func(p);
    printf("%d,%c\n",a.x,a.c);
    return 0;
}
void func(struct stu *b)
{
    b->x=b->x+9;
    b->c='n';
}
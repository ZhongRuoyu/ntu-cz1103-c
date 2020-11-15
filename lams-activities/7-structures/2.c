#include <stdio.h>
struct student {
    char name[20];
    int math;
};
int main()
{
    struct student s={"tom",90};
    struct student *p=&s;
    printf("%s%d\n",p->name,p->math);
    return 0;
}
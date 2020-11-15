#include <stdio.h>
struct stu
{  char num[10]; int score[3];  };
int main()
{
    struct stu s[3] = { {"20021",90,95,85},
                        {"20022",95,80,75},
                        {"20023",100,95,90} };
    struct stu *p=s;
    int i; int sum=0;
    for (i=0; i<3; i++)
        sum = sum+p->score[i];
    printf("%d\n",sum);
    return 0;
}
//structure with array
#include<stdio.h>
struct student
{
    char n[30];
    int e,h,m,t;
    float p;
};
void main()
{
    struct student s[5];
    int i;
    for(i=0;i<=4;i++)
    {
        printf("enter student name: ");
        scanf("%s",s[i].n);
        printf("\n enter marks in hindi, english and maths respectively\n");
        scanf("%d%d%d",&s[i].e,&s[i].h,&s[i].m);
        s[i].t=s[i].e+s[i].h+s[i].m;
        s[i].p=s[i].t/3;
        printf("\n total marks = %d\n",s[i].t);
        printf("\n percentage= %f\n",s[i].p);
    }
}

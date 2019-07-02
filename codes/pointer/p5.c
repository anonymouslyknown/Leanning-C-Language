//storing a student info. using structures
#include<stdio.h>
struct student
{
    char n[20];
    int h,e,m,t;
    float p;
};
void main()
{
    struct student s;
    printf("enter student name: ");
    scanf("%[^\n]",s.n);
    printf("\n enter marks in hindi, english and maths resp.\n");
    scanf("%d%d%d",&s.e,&s.h,&s.m);
    s.t=s.e+s.h+s.m;
    s.p=s.t/3;
    printf("\n total marks = %d\n",s.t);
    printf("\n percentage= %f",s.p);
}

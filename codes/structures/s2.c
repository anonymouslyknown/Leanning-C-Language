//passing elements of structure to function
#include<stdio.h>
struct student
{
    char n[20];
    int e,h,m,t;
    float p;
};
void main()
{
    int total(int, int,int);
    float per(int);
    struct student s;
    printf("enter name ");
    scanf("%s",&s.n);
    printf("\n enter marks in english, hindi and maths respectively ");
    scanf("%d%d%d",&s.e,&s.h,&s.m);
    s.t=total(s.e,s.h,s.m);
    s.p=per(s.t);
    printf("\ntotal %d\n",s.t);
    printf("per= %f",s.p);
}
    int total(int e, int h, int m)
    {
        int t;
        t=e+h+m;
        return(t);
    }
    float per(int t)
    {
        float p;
        p=t/3;
        return(p);
    }

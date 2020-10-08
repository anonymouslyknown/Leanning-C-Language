//sum two numbers using pointer
#include<stdio.h>
void main()
{
    int a,b,z,w,*p1,*p2,*p3,*p4;
    p1=&a;
    p2=&b;
    p3=&z;
    p4=&w;
    printf("enter first number \n");
    scanf("%d",p1);
    printf("enter second number ");
    scanf("%d",p2);
    *p3=*p2+*p1;
    *p4=*p3+*p1;
    printf("%d",*p3);
    printf("%d",*p4);

}

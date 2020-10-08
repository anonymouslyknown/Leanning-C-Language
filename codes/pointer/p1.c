//sum two numbers using pointer
#include<stdio.h>
void main()
{
    int a,b,z,r,*p1,*p2,*p3,*p5;
    p1=&a;
    p2=&b;
    p3=&z;
    p5=&r;
    printf("enter first number \n");
    scanf("%d",p1);
    printf("enter second number ");
    scanf("%d",p2);
    *p3=*p2+*p1;
    *p5=*p3+*p2;
    printf("%d",*p3);
    printf("%d",*p5);

}

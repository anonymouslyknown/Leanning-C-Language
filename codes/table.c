#include<stdio.h>
void main()
{
    int a,i;
    printf("enter a number\n ");
    scanf("%d",&a);
    i=1;
    while(i<=10)
    {
        printf("%d*%d=%d \n",a,i,a*i);
        i++;
    }
    }

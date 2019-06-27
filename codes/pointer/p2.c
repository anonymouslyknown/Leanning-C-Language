//input an array of five elements and print it using pointers
#include<stdio.h>
void main()
{
    int n[5],i,*p;
    p=n;
    for(i=0;i<=4;i++)
    {
        printf("enter element ");
        scanf("%d",(p+i));
    }
    for(i=0;i<=4;i++)
    {
        printf("%d",*(p+i));
    }
}

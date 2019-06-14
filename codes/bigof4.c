#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("input four numbers ");
    scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                printf("highest number is %d",a);
            }
            else
            {
                printf("highest number is %d",d);
            }
        }
        else
        {
            if(c>d)
            {
                printf(" highest number is %d",c);
            }
            else
            {
                printf("highest number is %d",d);
            }
        }
    }
    else
    {
        if(b>c)
        {
            if(b>d)
            {
                printf(" highest number is %d",b);
            }
            else
            {
                printf("highest number is %d",d);
            }
        }
        else
        {
            if(c>d)
            {
                printf("highest number is %d",c);
            }
            else
            {
                printf("highest number is %d",d);
            }
        }
    }
}

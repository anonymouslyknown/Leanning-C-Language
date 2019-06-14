#include<stdio.h>
void main()
{
    int a,b,c,i;
    for(i=1;i<=1;i++)
    {
        printf("enter 2 numbers to get their sum\n");
        scanf("%d\n%d",&a,&b);
        c=a+b;
        printf("sum of %d and %d is %d\n",a,b,c);
        printf("do you want it to run again\npress\n1 if yes\n2 if no\n");
        scanf("%d",&c);
        if(c==1)
        {
            i--;
        }
        else if(c==2)
        {
            printf("the programme is over");
        }
        else
        {
            printf("abandon");
        }
    }
}

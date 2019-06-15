#include<stdio.h>
void main()
{
    int n[10],i,k;
    for(i=0,k=0;i<=9;i++)
    {
        printf("enter any number\n");
        scanf("%d",&n[i]);
        if(n[i]>k)
        {
            k=n[i];
        }
    }
    printf("highest in ten is:\n%d",k);
}

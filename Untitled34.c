#include<stdio.h>
void main()
{
    int i,j,k,s;
    for(i=5;i>=1;i--)
    {
        s=5;
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(k=i;k<=5;k++,s--)
        {
            printf("%d",s);
        }
        printf("\n");
    }
}


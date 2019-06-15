#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=9;i++)
    {
        if(i<=5)
         {
            for(j=1;j<i;j++)
                {
                    printf(" ");
                }
            printf("%d\n",i);
         }
         else
         {
             for(j=9,k=j;j>i;j--)
             {
                 printf(" ");
             }
             printf("%d\n",k-i+1);
         }
    }
}

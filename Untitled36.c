#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        if(i<=5)
         {
            for(j=5;j>=i;j--)
                {
                    printf("%d",j);
                }
         }
         else
         {
             for(j=5;j<=i;j++)
             {
                 printf("%d",10-j);
             }
         }
         printf("\n");
    }
}

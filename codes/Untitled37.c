#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=9;i>=1;i--)
    {
        if(i>=5)
         {
            for(j=9;j>=i;j--)
                {
                    printf("%d",j-4);
                }
         }
         else
         {
             k=4;
             for(j=1;j<=i;j++)
             {
                 printf("%d",j+k);
                 k=k-2;
             }
         }
         printf("\n");
    }
}

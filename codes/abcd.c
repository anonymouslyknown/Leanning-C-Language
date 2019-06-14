#include<stdio.h>
void main()
{
    int i,j,z;
    for(i=1;i<=9;i++)
    {
        z=65;
        if(i<=5)
         {
            for(j=1;j<=i;j++,z++)
                {
                    printf("%c",z);
                }
         }
         else
         {
             for(j=9;j>=i;j--,z++)
             {
                 printf("%c",z);
             }
         }
         printf("\n");
    }
}

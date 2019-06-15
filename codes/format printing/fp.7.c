#include<stdio.h>
void main()
{
    int i,j,k,z;
    for(i=1;i<=9;i++)
    {
        z=65;
        if(i<=5)
        {
            for(j=5;j>i;j--)
            {
                printf(" ");
            }
            for(k=1;k<=i;k++,z++)
            {
                printf("%c",z);
            }
        }
        else
        {
            for(j=5;j<i;j++)
            {
                printf(" ");
            }
            for(k=9;k>=i;k--,z++)
            {
                printf("%c",z);
            }

        }
        printf("\n");
    }




}

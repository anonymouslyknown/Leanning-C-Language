#include<stdio.h>
void main()
{
    int i,j,z;
    for(i=1,z=65;i<=5;i++,z++)
    {
        for(j=5;j>i;j--)
        {
            printf(" ");
        }
        printf("%c\n",z);
    }
}

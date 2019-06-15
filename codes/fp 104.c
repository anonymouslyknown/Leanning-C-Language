#include<stdio.h>
void main()
{
    int i,j;
    char z;
    for(i=1;i<=5;i++)
    {
        z=65;
        for(j=1;j<=i;j++,z++)
        {
            printf("%c",z);
        }
        printf("\n");
    }
}

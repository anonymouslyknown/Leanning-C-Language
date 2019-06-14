#include<stdio.h>
void main()
{
    int i,j,z,k,a;
    for(i=1,z=69;i<=5;i++,z--)
    {
        for(j=5;j>=i;j--)
        {
            printf(" ");
        }
        a=z;
        for(k=1;k<=i;k++,a++)
        {
            printf("%c",a);
        }
        printf("\n");
    }
}

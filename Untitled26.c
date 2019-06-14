#include<stdio.h>
void main()
{
    int i,j,z,a;
    for(i=1,z=69;i<=5;i++,z--)
    {
        a=z;
        for(j=i;j<=5;j++,a--)
        {
            printf("%c",a);
        }

        printf("\n");
    }
}

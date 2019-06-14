#include<Stdio.h>
void main()
{
    int i,k,j;
    for(i=1;i<=5;i++)
    {
        for(k=5;k>i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
}

#include <stdio.h>
void main()
{
    int n[3][3],i,j;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("enter matrix element\n");
            scanf("%d",&n[i][j]);

        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d\t",n[i][j]);
        }
        printf("\n");
    }
}

//input a 2d array and display in column sum form
#include<stdio.h>
void main()
{
    int n[3][3],r,c,s;
    for(r=0;r<=2;r++)
    {
        for(c=0;c<=2;c++)
        {
            printf("enter matrix element: ");
            scanf("%d",&n[r][c]);
        }
        printf("\n");
    }
    for(r=0;r<=2;r++)
    {
        for(c=0;c<=2;c++)
        {
            printf("%d\t",n[r][c]);
        }
        printf("\n");
    }
    printf("__________________\n");
    for(c=0;c<=2;c++)
    {
        for(r=0,s=0;r<=2;r++)
        {
            s=s+n[r][c];
        }
        printf("%d\t",s);
    }

}

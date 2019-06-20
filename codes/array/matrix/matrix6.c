//input a 2d array and display mirror(see result to understand)
#include<stdio.h>
void main()
{
    int n[3][3],r,c;
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
         printf("|\t");
         for(c=2;c>=0;c--)
         {
             printf("%d\t",n[r][c]);
         }
         printf("\n");
    }
    printf("__\t__\t__\t\t__\t__\t__\n");
    for(r=2;r>=0;r--)
    {
        for(c=0;c<=2;c++)
        {
            printf("%d\t",n[r][c]);
        }
        printf("|\t");
        for(c=2;c>=0;c--)
        {
            printf("%d\t",n[r][c]);
        }
        printf("\n");
    }

}

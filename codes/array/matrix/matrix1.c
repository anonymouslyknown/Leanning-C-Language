//input a 2d array and print its transpose
#include<stdio.h>
void main()
{
    int n[3][3],r,c;
    for(r=0;r<=2;r++)
    {
        for(c=0;c<=2;c++)
        {
            printf("enter element ");
            scanf("%d",&n[r][c]);
        }
        printf("\n");
    }
    for(c=0;c<=2;c++)
    {
        for(r=0;r<=2;r++)
        {
            printf("%d\t",n[r][c]);
        }
        printf("\n");
    }

}








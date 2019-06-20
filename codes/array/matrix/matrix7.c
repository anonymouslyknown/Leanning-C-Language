//input a 3*3 matrix and also input a searching element and display like i did
#include<stdio.h>
void main()
{
    int n[3][3],r,c,se,k;
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
    printf("enter searching element:\t");
    scanf("%d",&se);
    printf("searching element=%d\n",se);
    for(r=0,k=0;r<=2;r++)
    {
        for(c=0;c<=2;c++)
        {
            if(n[r][c]==se)
            {
                printf("%d found at %d number row and %d number column\n",se,r,c);
            }
            else
            {
                k++;
            }
        }
    }
    if(k==9)
    {
        printf(" not found");
    }
}

//input a 2d array and display it and also right diagonal sum
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
    printf("___________________________\n");
    for(r=0,s=0;r<=2;r++)
    {
        s=s+n[r][r];
    }
    printf("\t\t\t%d",s);
}

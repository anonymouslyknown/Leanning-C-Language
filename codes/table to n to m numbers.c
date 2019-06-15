#include<stdio.h>
void main()
{
    int n,m,j,s,r;
    printf("enter starting number\n");
    scanf("%d",&n);
    printf("enter ending number\n");
    scanf("%d",&m);

    for(;n<=m;n++)
    {
        printf("table of %d is \n",n);
        for(j=1;j<=10;j++)
        {
            s=n*j;
            printf("%d\n",s);
        }

    }


}


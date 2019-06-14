#include<stdio.h>
void main()
{
    int n,m,j,s;
    printf("enter starting number\n");
    scanf("%d",&n);
    printf("enter ending number\n");
    scanf("%d",&m);

    for(;n<=m;n++)
    {
        for(s=1,j=n;j>=1;j--)
            {
                s=s*j;
            }
        printf("the factorial of %d is %d\n",n,s);
    }


}





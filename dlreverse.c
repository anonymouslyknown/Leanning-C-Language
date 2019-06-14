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
        for(j=n,s=0;j>0;j=j/10)
        {
            r=j%10;
            s=s*10 +r;
        }
        printf("reverse of %d is %d\n",n,s);
    }
}

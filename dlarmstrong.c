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
        for(s=0,j=n;j>0;j=j/10)
        {
            r=j%10;
            s=s+ r*r*r;
        }
        if(s==n)
        {
            printf("the number %d is armstrong\n",n);
        }
    }

}

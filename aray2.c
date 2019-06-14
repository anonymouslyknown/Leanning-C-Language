#include <stdio.h>
int main()
{
    int n[5],i,j,s;
    for (i=0;i<=4;i++)
    {
        printf("Enter any number:");
        scanf("%d",&n[i]);
    }
    for(j=0,s=0;j<=4;j++)
    {
        printf("%d\n",n[j]);
        s=s+n[j];
    }
    printf("sum is %d",s);
}

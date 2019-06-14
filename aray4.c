#include <stdio.h>
int main()
{
    int n[10],i,j,s,k;
    for (i=0,s=0,k=0;i<=9;i++)
    {
        printf("Enter any number:");
        scanf("%d",&n[i]);
        if(n[i]%2==0)
        {
            s=s+n[i];
        }
        else
        {
            k=k+n[i];
        }
    }
    printf("sum of even are %d\n",s);
    printf("sum odd are %d",k);

}


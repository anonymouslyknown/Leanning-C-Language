#include<stdio.h>
void main()
{
    int n[5],i,j,k;
    for(i=0;i<=4;i++)
    {
        printf("enter number\n");
        scanf("%d",&n[i]);
    }
    for(i=0;i<=4;i++)
    {
        for(j=i+1;j<=4;j++)
        {
            if(n[i]>n[j])
            {
                k=n[i];
                n[i]=n[j];
                n[j]=k;
            }
        }
    }
    for(i=0;i<=4;i++)
    {
        printf("%d\n",n[i]);
    }
}



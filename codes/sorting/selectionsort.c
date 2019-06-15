#include<stdio.h>
void main()
{
    int n[5],a,i,j,k;
    for(i=0;i<=4;i++)
    {
        printf("enter number\n");
        scanf("%d",&n[i]);
    }
    for(a=4;a>=0;a--)
    {
         for(i=0,j=i+1;j<=a;i++,j++)
        {
            if(n[i]>n[j])
            {
                k=n[i];
                n[i]=n[j];
                n[j]=k;
            }
        }
    }
    printf("sorted answer is:\n");
    for(i=0;i<=4;i++)
    {
        printf("%d\n",n[i]);
    }
}

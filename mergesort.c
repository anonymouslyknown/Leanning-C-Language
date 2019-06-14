#include<stdio.h>
void main()
{
    int n[5],a[5],b[10],i,j,k,m,r,t;
    for(i=0;i<=4;i++)
    {
        printf("enter number for array 1\n");
        scanf("%d",&n[i]);
    }
    for(j=0;j<=4;j++)
    {
        printf("enter number for array 2\n");
        scanf("%d",&a[j]);
    }
    for(i=0;i<=4;i++)
    {
         for(k=i+1;k<=4;k++)
        {
            if(n[i]>n[k])
            {
                t=n[i];
                n[i]=n[k];
                n[k]=t;
            }
        }
    }
    for(j=0;j<=4;j++)
    {
         for(m=j+1;m<=4;m++)
        {
            if(a[j]>a[m])
            {
                t=a[j];
                a[j]=a[m];
                a[m]=t;
            }
        }
    }
        for(i=0,r=0,j=0;i<=4;i++,r++)
        {
            if(n[i]<=a[j])
            {
                b[r]=n[i];
            }
            else
            {
                b[r]=a[j];
                j++;
                i--;
            }
        }
    printf("after sorting:\n");
    for(k=0;k<=9;k++)
    {
         printf("%d\n",b[k]);
    }


}

//input an array of 10 element and store all negative elements at the end of array without changing the order
#include<stdio.h>
void main()
{
    int a[10],b[10],i,j,temp;
    for(i=0,j=0;i<=9;i++)
    {
        printf("enter element= ");
        scanf("%d",&a[i]);
    }
    for(i=0,j=0;i<=9;i++)
    {
        if(a[i]>=0)
        {
            b[j]=a[i];
            j++;
        }
    }
    for(i=0;i<=9;i++)
    {
        if(a[i]<0)
        {
            b[j]=a[i];
            j++;
        }
    }
       for(j=0;j<=9;j++)
    {
        printf("%d\n",b[j]);
    }

}


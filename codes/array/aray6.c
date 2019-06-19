//input an array
#include<stdio.h>
void main()
{
    int a[10],i,j,temp;
    for(i=0,j=0;i<=9;i++)
    {
        printf("enter element= ");
        scanf("%d",&a[i]);
        if(a[i]<0)
        {
            j++;
        }
    }
    for(i=0;j<=9;i++)
    {
        if(a[i]<0)
        {
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
            i--;
            j++;
        }
    }
    for(i=0;i<=9;i++)
    {
        printf("%d\n",a[i]);
    }

}

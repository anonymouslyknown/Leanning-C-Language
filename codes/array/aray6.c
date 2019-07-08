//input an array and store all negative elements at the end of array in same order using single array
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
    for(i=0;i<=9;i++)
    {
        if(a[i]<0)
        {
            temp=a[i];
            if(a[i+1]>=0)
            {
                a[i]=a[i+1];
                a[i+1]=temp;
            }
           /* a[j]=a[i];
            a[i]=temp;
            i--;
            j++;*/
        }
    }
    for(i=0;i<=9;i++)
    {
        printf("%d\n",a[i]);
    }

}

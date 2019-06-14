#include <stdio.h>
int main()
{
    int n[5],a[5],i,j;
    for (i=0;i<=4;i++)
    {
        printf("Enter any number:");
        scanf("%d",&n[i]);
    }
    for (i=4,j=0;j<=4;j++,i--)
    {
       a[j]=n[i];
        printf("%d\n",a[j]);

    }
    return 0;
}

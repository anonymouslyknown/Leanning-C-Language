#include <stdio.h>
int main()
{
    int n[10],i,j,s;
    for (i=0,s=0;i<=9;i++)
    {
        printf("Enter any number:");
        scanf("%d",&n[i]);
        if(n[i]%2==0)
        {
            s++;
        }
    }
    printf("total even are %d\n",s);
    printf("total odd are %d",10-s);

}


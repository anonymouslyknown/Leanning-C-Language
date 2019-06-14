#include<stdio.h>
void main()
{
    int n,j,s;
    printf("enter a number\n");
    scanf("%d",&n);
     j=n;
    for(s=1;n>=1;n--)
    {
        s=s*n;
    }
    printf("the factorial of %d is %d",j,s);
}

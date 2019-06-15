#include<stdio.h>
void main()
{
    int n,m,i,s;
    printf("enter starting number\n");
    scanf("%d",&n);
    printf("enter ending number\n");
    scanf("%d",&m);

    for(;n<=m;n++)
    {

        for(i=1,s=0;i<n;i++)
        {
            if(n%i==0)
                {
                    s=s+i;
                }
        }
        if(s==n)
        {
            /*A number is perfect if the sum of all its divisors
             (other than the number) equals to the number
             */
            printf("the number %d is perfect\n",n);
        }

    }

}

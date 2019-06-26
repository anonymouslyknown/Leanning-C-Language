//printing table of numbers between two numbers using functions
#include<stdio.h>
void main()
{
    void table(int,int);
    int n,m;
    printf("enter starting number ");
    scanf("%d",&n);
    printf("enter ending number ");
    scanf("%d",&m);

    table(n,m);
}
    void table(int n, int m)
    {
        int i,z;
        for(;n<=m;n++)
        {
            for(i=1;i<=10;i++)
            {
                z=n*i;
                printf("%d\n",z);
            }
            printf("\n\n");
        }
    }

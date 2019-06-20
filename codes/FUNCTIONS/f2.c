//make a function highest which receive 2 no. and return 'Y' or 'N' respectively
#include<stdio.h>
void main()
{
    char highest(int,int);
    int a,b,z;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    z= highest(a,b);
    if(z==Y)
    {
        printf("a is highest");
    }
    else
    {
        printf("b is highest");
    }
}
    char highest(int x, int y)
    {
        if(x>y)
        {
            return(Y);
        }
        else
        {
            return(N);
        }
    }

//Make a function highest which receive 2 numbers and return 1 if a is highest otherwise return 0
#include<stdio.h>
void main()
{
    int highest(int,int);
    int a,b,z;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    z= highest(a,b);
    if(z==1)
    {
        printf("a is highest");
    }
    else
    {
        printf("b is highest");
    }
}
    int highest(int x, int y)
    {
        if(x>y)
        {
            return(1);
        }
        else
        {
            return(0);
        }
    }

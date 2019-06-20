//make a function pl(profit loss)which receive two numbers and return 1 if profit and 0 if loss
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
        printf("profit");
    }
    else
    {
        printf("loss");
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


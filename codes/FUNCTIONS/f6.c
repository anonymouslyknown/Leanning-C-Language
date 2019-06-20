//make a function pl(profit loss)which receive two numbers return y and n respectively
#include<stdio.h>
void main()
{
    char highest(int,int);
    int a,b,z;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    z= highest(a,b);
    if(z==89)
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
            return(89);
        }
        else
        {
            return(80);
        }
    }


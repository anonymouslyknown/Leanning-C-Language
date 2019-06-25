//make a function pl(profit loss)which receive two numbers return y and n respectively
#include<stdio.h>
void main()
{
    char PL(int,int);
    int a,b,z;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    z= PL(a,b);
    if(z=='Y')
    {
        printf("profit");
    }
    else
    {
        printf("loss");
    }
}
    char PL(int x, int y)
    {
        if(x>y)
        {
            return('Y');
        }
        else
        {
            return('N');
        }
    }


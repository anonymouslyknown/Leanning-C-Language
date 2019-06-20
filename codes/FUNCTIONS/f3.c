//make a function highest which receive two numbers and display highest
#include<stdio.h>
void main()
{
    void highest(int,int);
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    highest(a,b);

}
    void highest(int x, int y)
    {
        if(x>y)
        {
            printf("a is highest");
        }
        else
        {
            printf("b is highest");
        }
    }


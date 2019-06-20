//make a function highest which input two numbers and display highest
#include<stdio.h>
void main()
{
    void highest();
    highest();

}
    void highest()
    {
        int a,b,z;
        printf("enter 2 numbers");
        scanf("%d%d",&a,&b);
        if(a>b)
        {
            printf("a is highest");
        }
        else
        {
            printf("b is highest");
        }
    }


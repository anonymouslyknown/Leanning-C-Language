//make a function which input 3 numbers and display highest
#include<stdio.h>
void main()
{
    void highest();
    highest();
}
    void highest()
    {
        int a,b,c;
        printf("input three numbers");
        scanf("%d%d%d",&a,&b,&c);
        if(a>b)
        {
            if(a>c)
            {
                printf("%d is highest",a);
            }
            else
            {
                printf("%d is highest",c);
            }
        }
        else
        {
            if(b>c)
            {
                printf("%d is highest",b);
            }
            else
            {
                printf("%d is highest",c);
            }
        }
    }

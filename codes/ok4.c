#include<stdio.h>
void main()
{
    int wh,s=2000;
    printf("input working hours of employee\n");
    scanf("%d",&wh);
    if(wh>8)
    {
         if(wh<=10)
        {
            s=s+(wh-8)*500;
            printf("salary of employee is %d",s);
        }
        else
        {
            if(wh<=14)
            {
                s=s+1000+(wh-10)*700;
                printf(" salary is %d",s);
            }
            else
            {
                s=s+1000+2800+(wh-14)*800;
                printf("salary is %",s);
            }
        }

    }
    else
    {
        printf("salary of employee is %d",s);



    }









}

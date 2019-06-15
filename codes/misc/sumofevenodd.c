#include<stdio.h>
void main()
{
    int i=1,j,k=0,s=0;
    while(i<=10)
    {
        printf("enter any number ");
        scanf(" %d\n",&j);
        if(j%2==0)
        {
            s=s+j;
        }
        else
        {
            k=k+j;
        }



        i++;
    }
        printf("sum of even numbers is %d\n",s);
        printf("sum of odd numbers is %d",k);







}

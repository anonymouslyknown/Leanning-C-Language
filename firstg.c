#include<stdio.h>
int main()
{
    int i,j;
    printf("enter any no");
    scanf("%d",&i);
    j=2;
    while(j<i)
    {
        if(i%j==0)
        {
            printf("no is prime");
        }
        else
        {
            printf("no is not prime");
        }
        j++;
    }   return 0;
}

#include<stdio.h>
void main()
{
    int i,j,k=0,s;
    printf("enter any number\n");
    scanf("%d",&i);
        s=i;
       while(i>0)
       {
           j=i%10;
           i=i/10;
           k=k+j;
       }
    if(s%7==0||s%10==7||k==7)
    {
        printf("the number is buzz");
    }
    else
    {
        printf("the number is not buzz");
    }

}

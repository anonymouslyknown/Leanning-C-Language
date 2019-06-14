#include<stdio.h>
void main()
{
    int i,j,k;
    k=0;
    printf("input any number\n");
    scanf("%d",&i);
    while(i>0)
    {
        j=i%10;
        k=k+j;
        i=i/10;

    }
    printf("the sum of digits is\n %d",k);





}

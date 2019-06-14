#include<stdio.h>
void main()
{
    int i,j,k=0;
    i=1;
    while(i<=10)
    {
        printf("input any number\n");
        scanf("%d",&j);
        if(j%2==0)
        {
            k++;
        }
        i++;
    }

    printf("total even numbers are %d\n",k);
    printf("total odd numbers are %d",10-k);



}

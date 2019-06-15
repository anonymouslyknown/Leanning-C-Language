#include<stdio.h>
void main()
{
    int i,j=1,k=0;
    printf("enter any number\n");
    scanf("%d",&i);
    while(j<i)
    {
        if(i%j==0)
        {
            k=k+j;
        }
        j++;
    }
    if(k==i)
    {
        printf("the number %d is perfect",i);
    }
    else
    {
        printf("the number %d is not perfect",i);
    }


}

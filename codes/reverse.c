#include<stdio.h>
void main()
{
    int i,j,k;
    k=0;
    printf("enter any number\n ");
    scanf("%d",&j);
    while(j>0)
    {
            i=j%10;
            k=(k*10)+i;
            j=j/10;

    }
        printf("reverse of that number is\n %d",k);






}

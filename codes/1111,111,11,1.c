#include<stdio.h>
void main()
{
    long int i,j;
    i=1,j=1111111111;
    while(i<=10)
    {
        printf("%d\n",j);
        j=(j-1)/10 ;
        i++;
        }




}

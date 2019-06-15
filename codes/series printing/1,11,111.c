#include<stdio.h>
void main()
{
    long int i,j;
    i=0,j=1;
    while(i<=10)
    {
        printf("%ld\n",j);
        j=j*10 +1;
        i++;
    }
}

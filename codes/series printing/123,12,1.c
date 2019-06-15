#include<stdio.h>
void main()
{
    int i,j;
    i=9,j=1234567890;
    while(i>=0)
    {
        printf("%d\n",j);
        j=(j-i)/10;
        i--;
        }





}

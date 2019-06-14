#include<stdio.h>
void main()
{
    int a,i,j,k;
    printf("input any number\n");
    scanf("%d,&a");
    j=0;
    i=a%10;
    while(a>10)
    {

        a=a/10;
        j++;
    }
    k=a/(10^j);
    printf("%d\n%d\n%d",i,j,k);



}

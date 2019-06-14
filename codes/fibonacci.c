#include<stdio.h>
void main()
{
    int a,i,j,k;
    i=0,j=1,a=1;

       printf("%d\n%d\n",i,j);
    while(a<=10)
       {

        k=i+j;
        i=j;
        j=k;
       printf("%d\n",k);
        a++;
        }

       return 0;
}

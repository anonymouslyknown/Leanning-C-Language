#include<stdio.h>
void main()
{
        int a,i,j,k,l;
        a=1,i=0,j=1,k=2;
        printf("%d\n%d\n%d\n",i,j,k);
        while(a<=10)
        {
            l=i+j+k;
            i=j;
            j=k;
            k=l;
            printf("%d\n",l);
            a++;
        }








}

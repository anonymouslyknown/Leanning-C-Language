#include<stdio.h>
void main()
{
    int n,c,l,r,a,f,z,s,i,j;
    z=n;
    printf("enter any no. ");
    scanf("%d",&n);
    for(c=0;z>0;)
    {
        f=z%10;
        z=z/10;
        c++;
    }
    z=n;
    for(j=0;z>0;)
    {
        a=z%10;
        j=j*10 +a;
        z=z/10;
    }
    j=j/10;
    l=n%10;
    s=l;
    for(;j>10;)
    {
        a=j%10;
        s=s*10 +a;
        j=j/10;
    }
    s=s*10+f;
    printf("%d",s);
}

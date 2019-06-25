#include<stdio.h>
void main()
{
    void sod(int);
    int a;
    printf("enter number ");
    scanf("%d",&a);
    sod(a);
}
    void sod(int n)
    {
        int s,r;
        for(s=0;n>0;)
        {
            r=n%10;
            s=s+r;
            n=n/10;
        }
        printf("%d",s);
    }



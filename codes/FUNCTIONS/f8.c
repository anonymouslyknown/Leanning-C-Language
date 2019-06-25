#include<stdio.h>
void main()
{
    void sod(int,int);
    int a,b;
    printf("enter starting number");
    scanf("%d",&a);
    printf("enter ending number");
    scanf("%d",&b);
    sod(a,b);
}
    void sod(int a,int b)
    {
        int i,r,s;
        for(;a<=b;a++)
        {
            s=0;
            i=a;
            for(;i>0;)
            {
                r=i%10;
                s=s+r;
                i=i/10;
            }
            printf("%d\n",s);
        }
    }

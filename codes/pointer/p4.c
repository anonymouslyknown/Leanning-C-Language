#include<stdio.h>
void main()
{
    void sod_rev_arm(int*);
    int a;
    printf("enter a number");
    scanf("%d\n",&a);
    sod_rev_arm(&a);

}
    void sod_rev_arm(int *p)
    {
        int s,r,z;
        z=*p;
        for(s=0;z>0;)
        {
            r=z%10;
            s=s+r;
            z=z/10;
        }
        printf("%d",s);

    }

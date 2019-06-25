//input 2 matrix and do their sum
#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],s[3][3];
    void input(int [3][3]);
    void disp(int [3] [3]);
    void sum(int[3][3],int [3][3],int[3][3]);

    input(a);
    disp(a);
    input(b);
    disp(b);
    sum(a,b,s);
    disp(s);
}
    void input(int n[3][3])
    {
        int r,c;
        for(r=0;r<=2;r++)
        {
            for(c=0;c<=2;c++)
            {
                printf("enter element\t");
                scanf("%d",&n[r][c]);
            }
        }
    }
    void disp(int n[3][3])
    {
           int r,c;
        for(r=0;r<=2;r++)
        {
            for(c=0;c<=2;c++)
            {
                printf("%d\t",n[r][c]);
            }
            printf("\n");
        }
    }
    void sum(int a[3][3],int b[3][3], int s[3][3])
    {
         int r,c;
        for(r=0;r<=2;r++)
        {
            for(c=0;c<=2;c++)
            {
                s[r][c]=a[r][c]+b[r][c];
            }
        }
    }

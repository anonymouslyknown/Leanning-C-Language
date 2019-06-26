//2 d array with functions
#include<stdio.h>
void main()
{
    int a,b=1;
    while(b)
    {
        printf("MENU\n");
        printf("enter a number ");
        scanf("%",&a);
        switch(a)
        {
        case 1:
            void input(int [3][3]);
            int x[3][3];
            input(x);
            break;

        case 21:
            b=0;
            break;
        }
    }
}
    void input(int n[3][3])
    {
        int r,c;
        for(r=0;r<=2;r++)
        {
            for(c=0;c<=2;c++)
            {
                printf("enter element ");
                scanf("%d"&n[r][c]);
            }
        }
    }

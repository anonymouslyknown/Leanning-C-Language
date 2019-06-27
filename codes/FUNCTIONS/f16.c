//2 d array with functions
#include<stdio.h>
void main()
{
    void input(int [3][3]);
    void disp(int[3][3]);
    void transpose(int [3][3]);
    void rs(int[3][3]);
    void cs(int[3][3]);
    void lds(int[3][3]);
    void rds(int[3][3]);
    void is(int[3][3]);



















    int a,b=0;
    int n[3][3];
    while(b!=21)
    {
        printf("MENU\n");
        printf("enter a number ");
        scanf("%d",&a);
        switch(a)
        {
        case 1:
            input(n);
            break;

        case 2:
            disp(n);
            break;

        case 3:
            transpose(n);
            break;

        case 4:
            rs(n);
            break;

        case 5:
            cs(n);
            break;

        case 6:
            lds(n);
            break;

        case 7:
            rds(n);
            break;

        case 8:
            is(n);
            break;

        case 21:
            b=21;
            break;
        }
    }
}
    //input matrix function
    void input(int n[3][3])
    {
        int r,c;
        for(r=0;r<=2;r++)
        {
            for(c=0;c<=2;c++)
            {
                printf("enter element ");
                scanf("%d",&n[r][c]);
            }
        }
    }
    //display function
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
    //transpose function
    void transpose(int n[3][3])
    {
        int r,c;
        for(c=0;c<=2;c++)
        {
            for(r=0;r<=2;r++)
            {
                printf("%d\t",n[r][c]);
            }
            printf("\n");
        }
    }
    //row sum function
    void rs(int n[3][3])
    {
        int r,c,s;
        for(r=0;r<=2;r++)
        {
            s=0;
            for(c=0;c<=2;c++)
            {
                printf("%d\t",n[r][c]);
                s=s+n[r][c];
            }
            printf("|\t%d",s);
            printf("\n");
        }
    }
    //column sum function
    void cs(int n[3][3])
    {
        int r,c,s;
        for(r=0;r<=2;r++)
        {
            for(c=0;c<=2;c++)
            {
                printf("%d\t",n[r][c]);
            }
            printf("\n");
        }
        printf("__\t__\t__\n");
        for(c=0;c<=2;c++)
        {
            s=0;
            for(r=0;r<=2;r++)
            {
                s=s+n[r][c];
            }
            printf("%d\t",s);
        }
        printf("\n");
    }
    //left diagonal sum
    void lds(int n[3][3])
    {
        int r,c,s=0;
        for(r=0;r<=2;r++)
        {
            for(c=0;c<=2;c++)
            {
                printf("%d\t",n[r][c]);
            }
            printf("\n");
        }
        printf("_____________________\n");
        printf("\t\t\t");
        for(r=0,c=0;r<=2;r++,c++)
        {
            s=s+n[r][c];
        }
        printf("%d\n",s);
    }
    //right diagonal sum
    void rds(int n[3][3])
    {
        int r,c,s=0;
        for(r=0;r<=2;r++)
        {
            for(c=0;c<=2;c++)
            {
                printf("%d\t",n[r][c]);
            }
            printf("\n");
        }
        printf("_____________________\n");
        for(r=0,c=2;r<=2;r++,c--)
        {
            s=s+n[r][c];
        }
        printf("%d\n",s);
    }
    //inner sum function
    void is(int n[3][3])
    {
        int r,c,s=0;
        for(r=0;r<=2;r++)
        {
            for(c=0;c<=2;c++)
            {
                if((r+c)%2!=0)
                {
                    s=s+n[r][c];
                }
            }

        }
        printf("inner sum of matrix is= %d\n",s);
    }



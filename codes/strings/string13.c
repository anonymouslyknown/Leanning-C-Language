//input a string and do this =   'this is my pen' convert to 'siht si ym nep'
#include<stdio.h>
void main()
{
    char a[100];
    int i,z;
    printf("enter string element:\n");
    scanf("%[^\n]",a);
    for(i=0;a[i]!=' ';i++)
    {

    }
    for(i=i-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
    printf(" ");
    for(i=0;a[i]!=' ';i++)
    {

    }
    i=i+1;
    for(;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            z=i;
            i--;
            for(;a[i]!=' ';i--)
            {
                printf("%c",a[i]);
            }
            i=z+1;
        }
        printf(" ");
    }
    i--;
    for(;a[i]!=' ';i--)
    {
        printf("%c",a[i]);
    }

    /*for(;i>=0;i--)
    {
        printf("%c",a[i]);
    }
    */
}

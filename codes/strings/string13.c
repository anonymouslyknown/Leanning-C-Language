//input a string and do this =   'this is my pen' convert to 'siht si ym nep'
#include<stdio.h>
void main()
{
    char a[100];
    int i,z;
    printf("enter string element:\n");
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            z=i;
            i--;
            for(;i>=0;i--)
            {
                printf("%c",a[i]);
            }
            i=z;
        }
    }
    /*for(;i>=0;i--)
    {
        printf("%c",a[i]);
    }
    */
}

#include<stdio.h>
void main()
{
    void right(char[]);
    char a[100];
    printf("enter string\n");
    scanf("%s",a);
    right(a);
}
    void right(char a[])
    {
        int i;
        for(i=0;a[i]!='\0';i++)
        {

        }
        i=i-3;
        for(;a[i]!='\0';i++)
        {
            printf("%c",a[i]);
        }
    }



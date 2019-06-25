#include<stdio.h>
void main()
{
    void left(char[]);
    char a[100];
    printf("enter string\n");
    scanf("%s",a);
    left(a);
}
    void left(char a[])
    {
        int i;
        for(i=0;i<=2;i++)
        {
            printf("%c",a[i]);
        }
    }


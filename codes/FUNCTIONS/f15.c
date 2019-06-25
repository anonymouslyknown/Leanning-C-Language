#include<stdio.h>
void main()
{
    void substrate(char[]);
    char a[100];
    printf("enter string\n");
    scanf("%s",a);
    substrate(a);
}
    void substrate(char a[])
    {
        int i;
        for(i=2;i<=3;i++)
        {
            printf("%c",a[i]);
        }
    }



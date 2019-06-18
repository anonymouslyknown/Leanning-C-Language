//input any string and display in like this gopal goyal= g.goyal
#include<stdio.h>
void main()
{
    char a[100];
    int i;
    printf("enter string element:\n");
    scanf("%[^\n]",a);
    i=0;
    printf("%c",a[i]);
    for(i=1;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            printf(".");
            i++;
            printf("%c",a[i]);
        }
    }
    i--;
    for(;a[i]!=' ';i--)
    {

    }
    for(i=i+2;a[i]!='\0';i++)
    {
        printf("%c",a[i]);
    }
}

//input a string and check for palindrome or not
#include<stdio.h>
void main()
{
    char a[100];
    int i,k,b;
    printf("enter string element:\n");
    scanf("%c",a);
    for(i=0;i!='\0';i++)
    {

    }
    for(k=0,b=0;a[k]!='\0';i--,k++)
    {
        if(a[k]!=a[i])
        {
            b=1;
        }

    }
    if(b==0)
    {
        printf("the string is palindrome");
    }
    else
    {
        printf("the string is not palindrome");
    }
}

//input a string and check for palindrome or not
#include<stdio.h>
void main()
{
    char a[100];
    int i,k,z;
    printf("enter string element:\n");
    scanf("%[^\n]",a);
    for(i=0,k=0;a[i]!='\0';i++)
    {
        k++;
    }
    z=k/2;
    for(i=0;i<z;i++,k--)
    {
        if(a[i]!=a[k-1])
        {
            printf("the string is not palindrome");
            break;
        }
    }
    if(i==z)
    {

        printf("the string is palindrome");
    }

}

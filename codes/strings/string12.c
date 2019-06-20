//input a string and check if it is anagram or not
#include<stdio.h>
void main()
{
    char a[100],b[100];
    int i,j,n,m;
    printf("enter string element\n");
    scanf("%[^\n]",a);
    printf("enter string 2 element\n");
    scanf("%[^\n]",b);
    for(i=0,n=0;a[i]!='\0';i++)
    {
        n++;
    }
    for(j=0,m=0;b[j]!='\0';j++)
    {
        m++;
    }
    if(n!=m)
    {
        printf("the strings are not anagram ");
    }

}

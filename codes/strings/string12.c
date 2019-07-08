//input a string and check if it is anagram or not
#include<stdio.h>
void main()
{
    char a[100],b[100];
    int i,j,n,m,k;
    printf("enter string element\n");
    scanf("%[^\n]",a);
    fflush(stdin);
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
        exit(0);
    }
    for(i=0;i<=n;i++)
    {
        for(j=0,k=0;j<=m;j++)
        {
            if(a[i]==b[j])
            {
                k++;
            }
        }
        if(k==0)
        {
            printf("the strings are not anagram");
            exit(0);
        }
    }
    printf("the strings are anagram");

}

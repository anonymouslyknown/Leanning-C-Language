/*input a string and display its reverse*/
#include<stdio.h>
void main()
{
    int i,k=0;
    char a[100];
    printf("enter string elements:\n");
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++)
    {
        k++;
    }
     for(;k>=0;k--)
    {
        printf("%c",a[k]);
    }
}

//input a string and print it char by char using pointer
#include<stdio.h>
void main()
{
    char a[100],*p;
    printf("enter string element");
    scanf("%[^\n]",a);
    p=a;
    int i;
    for(i=0;*(p+i)!='\0';i++)
    {
        printf("%c\n",*(p+i));
    }
}

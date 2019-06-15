#include<stdio.h>
void main()
{
    int i;
    char a[100];
    printf("enter string element\n");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        printf("%c\n",a[i]);
    }
}

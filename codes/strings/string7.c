//input a string and convert it into uppercase
#include<stdio.h>
void main()
{
    char a[100];
    int i;
    printf("enter string element \n");
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=97&&a[i]<=122)
        {
            a[i]=a[i]-32;
        }
    }
    printf("%s",a);
}

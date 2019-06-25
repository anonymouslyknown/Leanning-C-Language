#include<stdio.h>
void main()
{
    int len(char[]);
    char a[100];
    int l;
    printf("enter string\n");
    scanf("%s",a);
    l=len(a);
    printf("length is = %d",l);
}
    int len(char a[])
    {
        int i;
        for(i=0;a[i]!='\0';i++)
        {

        }
        return(i);
    }

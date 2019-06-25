#include<stdio.h>
void main()
{
    void copy(char[],char[]);
    char a[100],b[100];
    printf("enter string\n");
    scanf("%s",a);
    copy(a,b);
}
    void copy(char a[],char b[])
    {
        int i,j;
        for(i=0,j=0;a[i]!='\0';i++,j++)
        {
            b[j]=a[i];
        }
        b[j]='\0';
        printf("%s",b);
    }


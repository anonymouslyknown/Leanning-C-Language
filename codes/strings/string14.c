//enter any string and do this    this is my pen = pen my is this
#include<stdio.h>
void main()
{
    char a[100];
    int i,z;
    printf("enter string element ");
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++)
    {

    }
    for(;a[i]!=' ';i--)
    {

    }
    z=i+1;
    for(;a[z]!='\0';z++)
    {
        printf("%c",a[z]);
    }
    printf(" ");
    i--;
    for(;i>=1;i--)
    {
        if(a[i]==' ')
        {
            z=i+1;
            for(;a[z]!=' ';z++)
            {
                printf("%c",a[z]);
            }
            printf(" ");
        }
    }
    for(;a[i]!=' ';i++)
    {
        printf("%c",a[i]);
    }
}

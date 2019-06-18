//input a string and make title case
#include<stdio.h>
void main()
{
    char a[100];
    int i;
    printf("enter string element \n");
    scanf("%[^\n]",a);
    i=0;
    if(a[i]>=97&&a[i]<=122)
    {
        a[i]=a[i]-32;
    }
    for(i=1;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            i++;
            if(a[i]>=97&&a[i]<=122)
            {
                a[i]=a[i]-32;
            }

        }
        else
        {
            if(a[i]>=65&&a[i]<=90)
            {
                a[i]=a[i]+32;
            }
        }
    }
    printf("%s",a);

}


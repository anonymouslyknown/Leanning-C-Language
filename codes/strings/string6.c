//input a string and count vowels, consonants ,digits and special characters
#include<stdio.h>
void main()
{
    char a[100];
    int i,v=0,c=0,n=0,s=0;
    printf("enter string element\n");
    scanf("%[^\n]",a);
    //gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))
        {
            if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
            {
                v++;

            }
            else
            {
                c++;
            }
        }
        else
        {
            if(a[i]>=48&&a[i]<=57)
            {
                n++;
            }
            else
            {
                s++;
            }
        }

    }
    printf("number of vowels are: %d\n number of consonants are: %d\n number of digits are: %d\n number of special characters are: %d",v,c,n,s);
}

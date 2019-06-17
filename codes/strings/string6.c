//input a string and count vowels, consonants ,digits and special characters
#include<stdio.h>
void main()
{
    char a[100];
    int i,v,c,n,s;
    printf("enter string element\n");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=65&&a[i]<=90||a[i]>=97&&a[i]<=122)
        {
            if(a[i]=='a'||a[i]=='A'||a[i]=='b'||a[i]=='B'||a[i]=='c'||a[i]=='C'||a[i]=='d'||a[i]=='D'||a[i]=='e'||a[i]=='E')
            {
                v++;
            }
            else
            {
                c++;
            }
        }
        else if(a[i]>=48&&a[i]<=57)
        {
            n++;
        }
        else
        {
            s++;
        }
    }
    printf("number of vowels are: %d\n number of consonants are: %d\n number of digits are: %d\n number of special characters are: %d",v,c,n,s);
}

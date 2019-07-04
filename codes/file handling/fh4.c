//using fgets
#include<stdio.h>
void main()
{
    FILE *p;
    char n[20],c[100];
    printf("enter file name");
    scanf("%s",n);
    p=fopen(n,"r");
    if(p==NULL)
    {
        printf("file cant be opened");
        exit(0);
    }
    while(fgets(c,79,p)!=EOF)
    {
        printf("%s",c);
    }
    printf("file opened");
    fclose(p);
}

//using fputs
#include<stdio.h>
#include<string.h>
void main()
{
    FILE *p;
    char n[20],c[100];
    printf("enter file name");
    scanf("%s",n);
    p=fopen(n,"w");
    if(p==NULL)
    {
        printf("file cannot be created");
        exit(0);
    }
    printf("start writing\n");
    scanf("%s",c);
    while(strlen(c)!=0)
    {
        fputs(c,p);
        printf("%d",strlen(c));
        scanf("%s",c);
    }
    fputc(EOF,p);
    printf("file saved");
    fclose(p);

}


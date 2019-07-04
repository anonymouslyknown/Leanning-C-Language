//learning to use fputc
#include<stdio.h>
void main()
{
    FILE *p;
    char n[20],c;
    printf("enter file name ");
    scanf("%s",n);
    p=fopen(n,"w");
    if(p==NULL)
    {
        printf("file cannot be created");
        exit(0);
    }
    printf("start writing (press enter to exit)");
    fflush(stdin);
    scanf("%c",&c);
    while(c!='\n')
    {
        fputc(c,p);
        scanf("%c",&c);
    }
    fputc(EOF,p);
    printf("\n file is saved");
    fclose(p);
}

//using fgetc
#include<stdio.h>
void main()
{
    FILE *p;
    char n[20],c;
    printf("enter file name");
    scanf("%s",n);
    p= fopen(n,"r");
    if(p==NULL)
    {
        printf("file isn't created yet");
        exit(0);
    }
    c = fgetc(p);
    while(c!=EOF)
    {
        printf("%c",c);
        c = fgetc(p);
    }
    printf("file opened");
    fclose(p);
}

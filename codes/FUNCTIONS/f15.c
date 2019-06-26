//applying substrate on a word using function
#include<stdio.h>
void main()
{
    void substrate(char[]);
    char a[100];
    printf("enter string\n");
    scanf("%s",a);
    substrate(a);
}
    void substrate(char a[])
    {
        int i;
        //first two letters will be eliminated and next two will be printed
        for(i=2;i<=3;i++)
        {
            printf("%c",a[i]);
        }
    }



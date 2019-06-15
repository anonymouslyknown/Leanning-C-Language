#include<stdio.h>
void main()
{
    int a,b,c,x;
    printf("input first number\n");
    scanf("%d",&a);
    printf("\npress\n 1 for addition \n 2 for subtraction \n 3 for multiplication \n 4 for division \n");
    scanf("%d",&b);
    printf("\n input second number\n");
    scanf("%d",&c);

    switch(b)
     {
         case 1:
            x=a+b;
            printf("the answer is %d",x);
            break;
        case 2:
            x=a-b;
            printf("the answer is %d",x);
            break;
        case 3:
            x=a*b;
            printf("the answer is %d",x);
            break;
        default:
            x=a/b;
            printf("the answer is %d",x);

     }



}

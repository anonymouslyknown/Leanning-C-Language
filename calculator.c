  // code for caculator
    #include<stdio.h>
    int main()

{
    float a,b,c;
    int d;
    printf("enter first number ");
    scanf("%f",&a);
    printf("press \n 1 for addition \n 2 for subtraction \n 3 for division \n 4 for mutiplication ");
    scanf("%d",&d);
    printf("enter second number ");
    scanf("%f",&b);

    if (d==1) {
        c=a+b;
        }

    else if (d==2) {
        c=a-b;
    }
    else if (d==3){
        while(b==0){
            printf("Please enter number other than 0 ");
            scanf("%f",&b);
        }
        c=a/b;
    }
    else if (d==4){
        c=a*b;
    }
    printf("the answer is %f \n",c);

}

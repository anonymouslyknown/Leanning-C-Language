  // code for caculator
    #include<stdio.h>
float sum(float a, float b);
float sub(float a, float b);
float div(float a, float b);
float mul(float a, float b);

    int main()

{
    float a,b;
    int d;
    printf("enter first number ");
    scanf("%f",&a);
    printf("press \n 1 for addition \n 2 for subtraction \n 3 for division \n 4 for mutiplication ");
    scanf("%d",&d);
    printf("enter second number ");
    scanf("%f",&b);
    switch (d)
    {
        case 1: // code to be executed if d = 1;
            printf("the answer is %.2f \n",sum(a,b));
            break;
        case 2: // code to be executed if d = 2;
            printf("the answer is %.2f \n",sub(a,b));
            break;
        case 3: // code to be executed if d = 2;
            while(b==0){
                    printf("Please enter number other than 0 ");
                    scanf("%f",&b);
            }
            printf("the answer is %.2f \n",div(a,b));
            break;
        default: // code to be executed if d doesn't match any cases
            printf("the answer is %.2f \n",mul(a,b));
    }
    return 0;

}

float sum(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

float div(float a, float b) {
    return b==0 ? 0 : a / b ;
}

float mul(float a, float b) {
    return a * b;
}

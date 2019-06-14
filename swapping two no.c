#include<stdio.h>
void main()
{
	int a,b;
	printf("enter two number");
	scanf("%d%d",&a,&b);
	printf("value before swapping a=%d and b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("value after swapping a=%d and b= %d", a,b);
}
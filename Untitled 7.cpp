#include<stdio.h>
int main()
{
	float a,b,d;
	int c;
	printf("Enter the first number in decimal");
	scanf("%f",&a);
	printf("Enter the second number in decimal");
	scanf("%f",&b);
	d=a*b;
	c=d;
	printf("the float value of two numbers multiplied is %f ",d);
	printf("and the int value of two numbers multiplied is %d",c);
	return 0;
}

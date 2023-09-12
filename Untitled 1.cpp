#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("Enter the values of a and b");
	scanf("%d %d",&a,&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	printf("The addition of %d and %d is %d \n",a,b,c);
	printf("The subtraction of %d and %d is %d \n",a,b,d);
	printf("The product of %d and %d is %d \n",a,b,e);
	printf("The division of %d and %d is %d \n",a,b,d);
    return 0;
}

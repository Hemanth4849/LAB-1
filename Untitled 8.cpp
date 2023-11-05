#include<stdio.h>
int main()
{
	float a,b,c,d;
	printf("Enter the distance in kilometres");
	scanf("%f",&a);
	b=a*1000;
	c=a*100000;
	d=a*1000000;
	printf("Distance in metres is %f /n",b);
	printf("Distance in centimetres is %f /n",c);
	printf("Distance in millimetres is %f /n",d);
	return 0;
}
